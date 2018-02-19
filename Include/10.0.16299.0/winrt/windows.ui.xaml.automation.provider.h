/* Header file automatically generated from windows.ui.xaml.automation.provider.idl */
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
#ifndef __windows2Eui2Examl2Eautomation2Eprovider_h__
#define __windows2Eui2Examl2Eautomation2Eprovider_h__
#ifndef __windows2Eui2Examl2Eautomation2Eprovider_p_h__
#define __windows2Eui2Examl2Eautomation2Eprovider_p_h__


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
#include "Windows.UI.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Automation.h"
#include "Windows.UI.Xaml.Automation.Peers.h"
#include "Windows.UI.Xaml.Automation.Text.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IAnnotationProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider ABI::Windows::UI::Xaml::Automation::Provider::IAnnotationProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ICustomNavigationProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider ABI::Windows::UI::Xaml::Automation::Provider::ICustomNavigationProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IDockProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider ABI::Windows::UI::Xaml::Automation::Provider::IDockProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IDragProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider ABI::Windows::UI::Xaml::Automation::Provider::IDragProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IDropTargetProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider ABI::Windows::UI::Xaml::Automation::Provider::IDropTargetProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IExpandCollapseProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider ABI::Windows::UI::Xaml::Automation::Provider::IExpandCollapseProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IGridItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider ABI::Windows::UI::Xaml::Automation::Provider::IGridItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IGridProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider ABI::Windows::UI::Xaml::Automation::Provider::IGridProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IIRawElementProviderSimple;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IInvokeProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider ABI::Windows::UI::Xaml::Automation::Provider::IInvokeProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IItemContainerProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider ABI::Windows::UI::Xaml::Automation::Provider::IItemContainerProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IMultipleViewProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider ABI::Windows::UI::Xaml::Automation::Provider::IMultipleViewProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IObjectModelProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider ABI::Windows::UI::Xaml::Automation::Provider::IObjectModelProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IRangeValueProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider ABI::Windows::UI::Xaml::Automation::Provider::IRangeValueProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IScrollItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider ABI::Windows::UI::Xaml::Automation::Provider::IScrollItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IScrollProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider ABI::Windows::UI::Xaml::Automation::Provider::IScrollProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ISelectionItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider ABI::Windows::UI::Xaml::Automation::Provider::ISelectionItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ISelectionProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider ABI::Windows::UI::Xaml::Automation::Provider::ISelectionProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ISpreadsheetItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider ABI::Windows::UI::Xaml::Automation::Provider::ISpreadsheetItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ISpreadsheetProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider ABI::Windows::UI::Xaml::Automation::Provider::ISpreadsheetProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IStylesProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider ABI::Windows::UI::Xaml::Automation::Provider::IStylesProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ISynchronizedInputProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider ABI::Windows::UI::Xaml::Automation::Provider::ISynchronizedInputProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITableItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider ABI::Windows::UI::Xaml::Automation::Provider::ITableItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITableProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider ABI::Windows::UI::Xaml::Automation::Provider::ITableProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextChildProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider ABI::Windows::UI::Xaml::Automation::Provider::ITextChildProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextEditProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider ABI::Windows::UI::Xaml::Automation::Provider::ITextEditProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider ABI::Windows::UI::Xaml::Automation::Provider::ITextProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextProvider2;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 ABI::Windows::UI::Xaml::Automation::Provider::ITextProvider2

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextRangeProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITextRangeProvider2;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider2

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IToggleProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider ABI::Windows::UI::Xaml::Automation::Provider::IToggleProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITransformProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider ABI::Windows::UI::Xaml::Automation::Provider::ITransformProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface ITransformProvider2;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 ABI::Windows::UI::Xaml::Automation::Provider::ITransformProvider2

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IValueProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider ABI::Windows::UI::Xaml::Automation::Provider::IValueProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IVirtualizedItemProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider ABI::Windows::UI::Xaml::Automation::Provider::IVirtualizedItemProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        interface IWindowProvider;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider ABI::Windows::UI::Xaml::Automation::Provider::IWindowProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AnnotationType : int AnnotationType;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class AutomationProperty;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationProperty;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty ABI::Windows::UI::Xaml::Automation::IAutomationProperty

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum DockPosition : int DockPosition;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum ExpandCollapseState : int ExpandCollapseState;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Peers {
                        
                        typedef enum AutomationNavigationDirection : int AutomationNavigationDirection;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Peers */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum RowOrColumnMajor : int RowOrColumnMajor;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum ScrollAmount : int ScrollAmount;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum SupportedTextSelection : int SupportedTextSelection;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum SynchronizedInputType : int SynchronizedInputType;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Text {
                        
                        typedef enum TextPatternRangeEndpoint : int TextPatternRangeEndpoint;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Text {
                        
                        typedef enum TextUnit : int TextUnit;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum ToggleState : int ToggleState;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum WindowInteractionState : int WindowInteractionState;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum WindowVisualState : int WindowVisualState;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum ZoomUnit : int ZoomUnit;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */









































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        class IRawElementProviderSimple;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */








/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IAnnotationProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider[] = L"Windows.UI.Xaml.Automation.Provider.IAnnotationProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("95BA1417-4437-451B-9461-050A49B59D06"), contract] */
                        MIDL_INTERFACE("95BA1417-4437-451B-9461-050A49B59D06")
                        IAnnotationProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeId(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeName(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Author(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateTime(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Target(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IAnnotationProvider=_uuidof(IAnnotationProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider[] = L"Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("2BD8A6D0-2FA3-4717-B28C-4917CE54928D"), contract] */
                        MIDL_INTERFACE("2BD8A6D0-2FA3-4717-B28C-4917CE54928D")
                        ICustomNavigationProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE NavigateCustom(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Peers::AutomationNavigationDirection direction,
                                /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICustomNavigationProvider=_uuidof(ICustomNavigationProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDockProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDockProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDockProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("48C243F8-78B1-44A0-AC5F-750757BCDE3C"), contract] */
                        MIDL_INTERFACE("48C243F8-78B1-44A0-AC5F-750757BCDE3C")
                        IDockProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DockPosition(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::DockPosition * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetDockPosition(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::DockPosition dockPosition
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IDockProvider=_uuidof(IDockProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDragProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDragProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDragProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("2E7786A9-7FFC-4F57-B965-1EF1F373F546"), contract] */
                        MIDL_INTERFACE("2E7786A9-7FFC-4F57-B965-1EF1F373F546")
                        IDragProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrabbed(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffect(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffects(
                                /* [out] */__RPC__out UINT32 * __valueSize,
                                /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetGrabbedItems(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IDragProvider=_uuidof(IDragProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDropTargetProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDropTargetProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("7A245BDD-B458-4FE0-98C8-AAC89DF56D61"), contract] */
                        MIDL_INTERFACE("7A245BDD-B458-4FE0-98C8-AAC89DF56D61")
                        IDropTargetProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffect(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffects(
                                /* [out] */__RPC__out UINT32 * __valueSize,
                                /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IDropTargetProvider=_uuidof(IDropTargetProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider[] = L"Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("49AC8399-D626-4543-94B9-A6D9A9593AF6"), contract] */
                        MIDL_INTERFACE("49AC8399-D626-4543-94B9-A6D9A9593AF6")
                        IExpandCollapseProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpandCollapseState(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::ExpandCollapseState * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Collapse(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Expand(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IExpandCollapseProvider=_uuidof(IExpandCollapseProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IGridItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("FFF3683C-7407-45BB-A936-DF3ED6D3837D"), contract] */
                        MIDL_INTERFACE("FFF3683C-7407-45BB-A936-DF3ED6D3837D")
                        IGridItemProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Column(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnSpan(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainingGrid(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Row(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowSpan(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IGridItemProvider=_uuidof(IGridItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IGridProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("8B62B7A0-932C-4490-9A13-02FDB39A8F5B"), contract] */
                        MIDL_INTERFACE("8B62B7A0-932C-4490-9A13-02FDB39A8F5B")
                        IGridProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnCount(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowCount(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetItem(
                                /* [in] */INT32 row,
                                /* [in] */INT32 column,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IGridProvider=_uuidof(IGridProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("EC752224-9B77-4720-BB21-4AC89FDB1AFD"), exclusiveto, contract] */
                        MIDL_INTERFACE("EC752224-9B77-4720-BB21-4AC89FDB1AFD")
                        IIRawElementProviderSimple : IInspectable
                        {
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IIRawElementProviderSimple=_uuidof(IIRawElementProviderSimple);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IInvokeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IInvokeProvider[] = L"Windows.UI.Xaml.Automation.Provider.IInvokeProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("F7D1A187-B13C-4540-B09E-6778E2DC9BA5"), contract] */
                        MIDL_INTERFACE("F7D1A187-B13C-4540-B09E-6778E2DC9BA5")
                        IInvokeProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Invoke(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInvokeProvider=_uuidof(IInvokeProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IItemContainerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider[] = L"Windows.UI.Xaml.Automation.Provider.IItemContainerProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("EF5CD845-E1D4-40F4-BAD5-C7FAD44A703E"), contract] */
                        MIDL_INTERFACE("EF5CD845-E1D4-40F4-BAD5-C7FAD44A703E")
                        IItemContainerProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE FindItemByProperty(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * startAfter,
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * automationProperty,
                                /* [in] */__RPC__in_opt IInspectable * value,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IItemContainerProvider=_uuidof(IItemContainerProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider[] = L"Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("D014E196-0E50-4843-A5D2-C22897C8845A"), contract] */
                        MIDL_INTERFACE("D014E196-0E50-4843-A5D2-C22897C8845A")
                        IMultipleViewProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentView(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSupportedViews(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) INT32 * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetViewName(
                                /* [in] */INT32 viewId,
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetCurrentView(
                                /* [in] */INT32 viewId
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMultipleViewProvider=_uuidof(IMultipleViewProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IObjectModelProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider[] = L"Windows.UI.Xaml.Automation.Provider.IObjectModelProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("C3CA36B9-0793-4ED0-BBF4-9FF4E0F98F80"), contract] */
                        MIDL_INTERFACE("C3CA36B9-0793-4ED0-BBF4-9FF4E0F98F80")
                        IObjectModelProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetUnderlyingObjectModel(
                                /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IObjectModelProvider=_uuidof(IObjectModelProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IRangeValueProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IRangeValueProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("838A34A8-7D5F-4079-AF03-C3D015E93413"), contract] */
                        MIDL_INTERFACE("838A34A8-7D5F-4079-AF03-C3D015E93413")
                        IRangeValueProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LargeChange(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maximum(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Minimum(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmallChange(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetValue(
                                /* [in] */DOUBLE value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRangeValueProvider=_uuidof(IRangeValueProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IScrollItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("9A3EC090-5D2C-4E42-9EE6-9D58DB100B55"), contract] */
                        MIDL_INTERFACE("9A3EC090-5D2C-4E42-9EE6-9D58DB100B55")
                        IScrollItemProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IScrollItemProvider=_uuidof(IScrollItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IScrollProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("374BF581-7716-4BBC-82EB-D997006EA999"), contract] */
                        MIDL_INTERFACE("374BF581-7716-4BBC-82EB-D997006EA999")
                        IScrollProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontallyScrollable(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalScrollPercent(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalViewSize(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticallyScrollable(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalScrollPercent(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalViewSize(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Scroll(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::ScrollAmount horizontalAmount,
                                /* [in] */ABI::Windows::UI::Xaml::Automation::ScrollAmount verticalAmount
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetScrollPercent(
                                /* [in] */DOUBLE horizontalPercent,
                                /* [in] */DOUBLE verticalPercent
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IScrollProvider=_uuidof(IScrollProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("6A4977C1-830D-42D2-BF62-042EBDDECC19"), contract] */
                        MIDL_INTERFACE("6A4977C1-830D-42D2-BF62-042EBDDECC19")
                        ISelectionItemProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelected(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionContainer(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE AddToSelection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Select(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISelectionItemProvider=_uuidof(ISelectionItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISelectionProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("1F018FCA-B944-4395-8DE1-88F674AF51D3"), contract] */
                        MIDL_INTERFACE("1F018FCA-B944-4395-8DE1-88F674AF51D3")
                        ISelectionProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanSelectMultiple(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectionRequired(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSelection(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISelectionProvider=_uuidof(ISelectionProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("EBDE8F92-6015-4826-B719-47521A81C67E"), contract] */
                        MIDL_INTERFACE("EBDE8F92-6015-4826-B719-47521A81C67E")
                        ISpreadsheetItemProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Formula(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetAnnotationObjects(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetAnnotationTypes(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::AnnotationType * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISpreadsheetItemProvider=_uuidof(ISpreadsheetItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("15359093-BD99-4CFD-9F07-3B14B315E23D"), contract] */
                        MIDL_INTERFACE("15359093-BD99-4CFD-9F07-3B14B315E23D")
                        ISpreadsheetProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetItemByName(
                                /* [in] */__RPC__in HSTRING name,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISpreadsheetProvider=_uuidof(ISpreadsheetProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IStylesProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IStylesProvider[] = L"Windows.UI.Xaml.Automation.Provider.IStylesProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("1A5B7A17-7C01-4BEC-9CD4-2DFA7DC246CD"), contract] */
                        MIDL_INTERFACE("1A5B7A17-7C01-4BEC-9CD4-2DFA7DC246CD")
                        IStylesProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedProperties(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillColor(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternColor(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternStyle(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Shape(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleId(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleName(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IStylesProvider=_uuidof(IStylesProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("3D60CECB-DA54-4AA3-B915-E3244427D4AC"), contract] */
                        MIDL_INTERFACE("3D60CECB-DA54-4AA3-B915-E3244427D4AC")
                        ISynchronizedInputProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Cancel(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE StartListening(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::SynchronizedInputType inputType
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISynchronizedInputProvider=_uuidof(ISynchronizedInputProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITableItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("3B2C49CD-1DE2-4EE2-A3E1-FB553559D15D"), contract] */
                        MIDL_INTERFACE("3B2C49CD-1DE2-4EE2-A3E1-FB553559D15D")
                        ITableItemProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetColumnHeaderItems(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetRowHeaderItems(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITableItemProvider=_uuidof(ITableItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITableProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("7A8ED399-6824-4595-BAB3-464BC9A04417"), contract] */
                        MIDL_INTERFACE("7A8ED399-6824-4595-BAB3-464BC9A04417")
                        ITableProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowOrColumnMajor(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::RowOrColumnMajor * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetColumnHeaders(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetRowHeaders(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITableProvider=_uuidof(ITableProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextChildProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextChildProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextChildProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("1133C336-A89B-4130-9BE6-55E33334F557"), contract] */
                        MIDL_INTERFACE("1133C336-A89B-4130-9BE6-55E33334F557")
                        ITextChildProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextContainer(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextRange(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextChildProvider=_uuidof(ITextChildProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextEditProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextEditProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextEditProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("EA3605B4-3A05-400E-B5F9-4E91B40F6176"), contract] */
                        MIDL_INTERFACE("EA3605B4-3A05-400E-B5F9-4E91B40F6176")
                        ITextEditProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetActiveComposition(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetConversionTarget(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextEditProvider=_uuidof(ITextEditProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("DB5BBC9F-4807-4F2A-8678-1B13F3C60E22"), contract] */
                        MIDL_INTERFACE("DB5BBC9F-4807-4F2A-8678-1B13F3C60E22")
                        ITextProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentRange(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedTextSelection(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::SupportedTextSelection * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSelection(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetVisibleRanges(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RangeFromChild(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * childElement,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RangeFromPoint(
                                /* [in] */ABI::Windows::Foundation::Point screenLocation,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextProvider=_uuidof(ITextProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("DF1D48BC-0487-4E7F-9D5E-F09E77E41246"), contract] */
                        MIDL_INTERFACE("DF1D48BC-0487-4E7F-9D5E-F09E77E41246")
                        ITextProvider2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE RangeFromAnnotation(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * annotationElement,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetCaretRange(
                                /* [out] */__RPC__out boolean * isActive,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextProvider2=_uuidof(ITextProvider2);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextRangeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("0274688D-06E9-4F66-9446-28A5BE98FBD0"), contract] */
                        MIDL_INTERFACE("0274688D-06E9-4F66-9446-28A5BE98FBD0")
                        ITextRangeProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Clone(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Compare(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * textRangeProvider,
                                /* [retval, out] */__RPC__out boolean * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CompareEndpoints(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint,
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * textRangeProvider,
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint targetEndpoint,
                                /* [retval, out] */__RPC__out INT32 * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ExpandToEnclosingUnit(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextUnit unit
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FindAttribute(
                                /* [in] */INT32 attributeId,
                                /* [in] */__RPC__in_opt IInspectable * value,
                                /* [in] */boolean backward,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE FindText(
                                /* [in] */__RPC__in HSTRING text,
                                /* [in] */boolean backward,
                                /* [in] */boolean ignoreCase,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetAttributeValue(
                                /* [in] */INT32 attributeId,
                                /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetBoundingRectangles(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) DOUBLE * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetEnclosingElement(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetText(
                                /* [in] */INT32 maxLength,
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Move(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextUnit unit,
                                /* [in] */INT32 count,
                                /* [retval, out] */__RPC__out INT32 * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE MoveEndpointByUnit(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint,
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextUnit unit,
                                /* [in] */INT32 count,
                                /* [retval, out] */__RPC__out INT32 * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE MoveEndpointByRange(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint endpoint,
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Automation::Provider::ITextRangeProvider * textRangeProvider,
                                /* [in] */ABI::Windows::UI::Xaml::Automation::Text::TextPatternRangeEndpoint targetEndpoint
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Select(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE AddToSelection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveFromSelection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(
                                /* [in] */boolean alignToTop
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetChildren(
                                /* [out] */__RPC__out UINT32 * __returnValueSize,
                                /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) ABI::Windows::UI::Xaml::Automation::Provider::IIRawElementProviderSimple * * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextRangeProvider=_uuidof(ITextRangeProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextRangeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("D3BE3DFB-9F54-4642-A7A5-5C18D5EE2A3F"), contract] */
                        MIDL_INTERFACE("D3BE3DFB-9F54-4642-A7A5-5C18D5EE2A3F")
                        ITextRangeProvider2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE ShowContextMenu(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITextRangeProvider2=_uuidof(ITextRangeProvider2);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IToggleProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IToggleProvider[] = L"Windows.UI.Xaml.Automation.Provider.IToggleProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("93B88290-656F-44F7-AEAF-78B8F944D062"), contract] */
                        MIDL_INTERFACE("93B88290-656F-44F7-AEAF-78B8F944D062")
                        IToggleProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ToggleState(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::ToggleState * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Toggle(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IToggleProvider=_uuidof(IToggleProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITransformProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("79670FDD-F6A9-4A65-AF17-861DB799A2DA"), contract] */
                        MIDL_INTERFACE("79670FDD-F6A9-4A65-AF17-861DB799A2DA")
                        ITransformProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMove(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanResize(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRotate(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Move(
                                /* [in] */DOUBLE x,
                                /* [in] */DOUBLE y
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Resize(
                                /* [in] */DOUBLE width,
                                /* [in] */DOUBLE height
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Rotate(
                                /* [in] */DOUBLE degrees
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITransformProvider=_uuidof(ITransformProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITransformProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITransformProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("A8B11756-A39F-4E97-8C7D-C1EA8DD633C5"), contract] */
                        MIDL_INTERFACE("A8B11756-A39F-4E97-8C7D-C1EA8DD633C5")
                        ITransformProvider2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanZoom(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZoomLevel(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxZoom(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinZoom(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Zoom(
                                /* [in] */DOUBLE zoom
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE ZoomByUnit(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::ZoomUnit zoomUnit
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ITransformProvider2=_uuidof(ITransformProvider2);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IValueProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IValueProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("2086B7A7-AC0E-47D1-AB9B-2A64292AFDF8"), contract] */
                        MIDL_INTERFACE("2086B7A7-AC0E-47D1-AB9B-2A64292AFDF8")
                        IValueProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetValue(
                                /* [in] */__RPC__in HSTRING value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IValueProvider=_uuidof(IValueProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("17D4A04B-D658-48E0-A574-5A516C58DFA7"), contract] */
                        MIDL_INTERFACE("17D4A04B-D658-48E0-A574-5A516C58DFA7")
                        IVirtualizedItemProvider : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Realize(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVirtualizedItemProvider=_uuidof(IVirtualizedItemProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IWindowProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IWindowProvider[] = L"Windows.UI.Xaml.Automation.Provider.IWindowProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Provider {
                        /* [object, uuid("1BAA8B3D-38CF-415A-85D3-20E43A0EC1B1"), contract] */
                        MIDL_INTERFACE("1BAA8B3D-38CF-415A-85D3-20E43A0EC1B1")
                        IWindowProvider : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsModal(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTopmost(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maximizable(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Minimizable(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InteractionState(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::WindowInteractionState * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualState(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::WindowVisualState * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetVisualState(
                                /* [in] */ABI::Windows::UI::Xaml::Automation::WindowVisualState state
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE WaitForInputIdle(
                                /* [in] */INT32 milliseconds,
                                /* [retval, out] */__RPC__out boolean * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWindowProvider=_uuidof(IWindowProvider);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_FWD_DEFINED__


typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;





typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState;






typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection;







typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType;






typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit;







typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit;
















































/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IAnnotationProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider[] = L"Windows.UI.Xaml.Automation.Provider.IAnnotationProvider";
/* [object, uuid("95BA1417-4437-451B-9461-050A49B59D06"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_get_AnnotationTypeId(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_get_AnnotationTypeName(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeName(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_get_Author(This,value) \
    ( (This)->lpVtbl->get_Author(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_get_DateTime(This,value) \
    ( (This)->lpVtbl->get_DateTime(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_get_Target(This,value) \
    ( (This)->lpVtbl->get_Target(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider[] = L"Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider";
/* [object, uuid("2BD8A6D0-2FA3-4717-B28C-4917CE54928D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NavigateCustom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection direction,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_NavigateCustom(This,direction,returnValue) \
    ( (This)->lpVtbl->NavigateCustom(This,direction,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDockProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDockProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDockProvider";
/* [object, uuid("48C243F8-78B1-44A0-AC5F-750757BCDE3C"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DockPosition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDockPosition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition dockPosition
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_get_DockPosition(This,value) \
    ( (This)->lpVtbl->get_DockPosition(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_SetDockPosition(This,dockPosition) \
    ( (This)->lpVtbl->SetDockPosition(This,dockPosition) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDragProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDragProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDragProvider";
/* [object, uuid("2E7786A9-7FFC-4F57-B965-1EF1F373F546"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrabbed )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffect )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetGrabbedItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_get_IsGrabbed(This,value) \
    ( (This)->lpVtbl->get_IsGrabbed(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_get_DropEffect(This,value) \
    ( (This)->lpVtbl->get_DropEffect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_get_DropEffects(This,__valueSize,value) \
    ( (This)->lpVtbl->get_DropEffects(This,__valueSize,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_GetGrabbedItems(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetGrabbedItems(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IDropTargetProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDropTargetProvider";
/* [object, uuid("7A245BDD-B458-4FE0-98C8-AAC89DF56D61"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffect )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_get_DropEffect(This,value) \
    ( (This)->lpVtbl->get_DropEffect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_get_DropEffects(This,__valueSize,value) \
    ( (This)->lpVtbl->get_DropEffects(This,__valueSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider[] = L"Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider";
/* [object, uuid("49AC8399-D626-4543-94B9-A6D9A9593AF6"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Collapse )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Expand )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_get_ExpandCollapseState(This,value) \
    ( (This)->lpVtbl->get_ExpandCollapseState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_Collapse(This) \
    ( (This)->lpVtbl->Collapse(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_Expand(This) \
    ( (This)->lpVtbl->Expand(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IGridItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridItemProvider";
/* [object, uuid("FFF3683C-7407-45BB-A936-DF3ED6D3837D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Column )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnSpan )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainingGrid )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Row )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowSpan )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_get_Column(This,value) \
    ( (This)->lpVtbl->get_Column(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_get_ColumnSpan(This,value) \
    ( (This)->lpVtbl->get_ColumnSpan(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_get_ContainingGrid(This,value) \
    ( (This)->lpVtbl->get_ContainingGrid(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_get_Row(This,value) \
    ( (This)->lpVtbl->get_Row(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_get_RowSpan(This,value) \
    ( (This)->lpVtbl->get_RowSpan(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IGridProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridProvider";
/* [object, uuid("8B62B7A0-932C-4490-9A13-02FDB39A8F5B"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnCount )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowCount )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItem )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
        /* [in] */INT32 row,
        /* [in] */INT32 column,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_get_ColumnCount(This,value) \
    ( (This)->lpVtbl->get_ColumnCount(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_get_RowCount(This,value) \
    ( (This)->lpVtbl->get_RowCount(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_GetItem(This,row,column,returnValue) \
    ( (This)->lpVtbl->GetItem(This,row,column,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple";
/* [object, uuid("EC752224-9B77-4720-BB21-4AC89FDB1AFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IInvokeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IInvokeProvider[] = L"Windows.UI.Xaml.Automation.Provider.IInvokeProvider";
/* [object, uuid("F7D1A187-B13C-4540-B09E-6778E2DC9BA5"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_Invoke(This) \
    ( (This)->lpVtbl->Invoke(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IItemContainerProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider[] = L"Windows.UI.Xaml.Automation.Provider.IItemContainerProvider";
/* [object, uuid("EF5CD845-E1D4-40F4-BAD5-C7FAD44A703E"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * startAfter,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * automationProperty,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_FindItemByProperty(This,startAfter,automationProperty,value,returnValue) \
    ( (This)->lpVtbl->FindItemByProperty(This,startAfter,automationProperty,value,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider[] = L"Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider";
/* [object, uuid("D014E196-0E50-4843-A5D2-C22897C8845A"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedViews )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) INT32 * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetViewName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
        /* [in] */INT32 viewId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetCurrentView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
        /* [in] */INT32 viewId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_get_CurrentView(This,value) \
    ( (This)->lpVtbl->get_CurrentView(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_GetSupportedViews(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetSupportedViews(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_GetViewName(This,viewId,returnValue) \
    ( (This)->lpVtbl->GetViewName(This,viewId,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_SetCurrentView(This,viewId) \
    ( (This)->lpVtbl->SetCurrentView(This,viewId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IObjectModelProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider[] = L"Windows.UI.Xaml.Automation.Provider.IObjectModelProvider";
/* [object, uuid("C3CA36B9-0793-4ED0-BBF4-9FF4E0F98F80"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUnderlyingObjectModel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_GetUnderlyingObjectModel(This,returnValue) \
    ( (This)->lpVtbl->GetUnderlyingObjectModel(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IRangeValueProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IRangeValueProvider";
/* [object, uuid("838A34A8-7D5F-4079-AF03-C3D015E93413"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LargeChange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maximum )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Minimum )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmallChange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_LargeChange(This,value) \
    ( (This)->lpVtbl->get_LargeChange(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_Maximum(This,value) \
    ( (This)->lpVtbl->get_Maximum(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_Minimum(This,value) \
    ( (This)->lpVtbl->get_Minimum(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_SmallChange(This,value) \
    ( (This)->lpVtbl->get_SmallChange(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_SetValue(This,value) \
    ( (This)->lpVtbl->SetValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IScrollItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollItemProvider";
/* [object, uuid("9A3EC090-5D2C-4E42-9EE6-9D58DB100B55"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_ScrollIntoView(This) \
    ( (This)->lpVtbl->ScrollIntoView(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IScrollProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollProvider";
/* [object, uuid("374BF581-7716-4BBC-82EB-D997006EA999"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Scroll )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount horizontalAmount,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount verticalAmount
        );
    HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
        /* [in] */DOUBLE horizontalPercent,
        /* [in] */DOUBLE verticalPercent
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_HorizontallyScrollable(This,value) \
    ( (This)->lpVtbl->get_HorizontallyScrollable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_HorizontalScrollPercent(This,value) \
    ( (This)->lpVtbl->get_HorizontalScrollPercent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_HorizontalViewSize(This,value) \
    ( (This)->lpVtbl->get_HorizontalViewSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_VerticallyScrollable(This,value) \
    ( (This)->lpVtbl->get_VerticallyScrollable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_VerticalScrollPercent(This,value) \
    ( (This)->lpVtbl->get_VerticalScrollPercent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_get_VerticalViewSize(This,value) \
    ( (This)->lpVtbl->get_VerticalViewSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_Scroll(This,horizontalAmount,verticalAmount) \
    ( (This)->lpVtbl->Scroll(This,horizontalAmount,verticalAmount) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_SetScrollPercent(This,horizontalPercent,verticalPercent) \
    ( (This)->lpVtbl->SetScrollPercent(This,horizontalPercent,verticalPercent) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider";
/* [object, uuid("6A4977C1-830D-42D2-BF62-042EBDDECC19"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionContainer )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Select )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_get_IsSelected(This,value) \
    ( (This)->lpVtbl->get_IsSelected(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_get_SelectionContainer(This,value) \
    ( (This)->lpVtbl->get_SelectionContainer(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_AddToSelection(This) \
    ( (This)->lpVtbl->AddToSelection(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_RemoveFromSelection(This) \
    ( (This)->lpVtbl->RemoveFromSelection(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_Select(This) \
    ( (This)->lpVtbl->Select(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISelectionProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionProvider";
/* [object, uuid("1F018FCA-B944-4395-8DE1-88F674AF51D3"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultiple )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequired )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_get_CanSelectMultiple(This,value) \
    ( (This)->lpVtbl->get_CanSelectMultiple(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_get_IsSelectionRequired(This,value) \
    ( (This)->lpVtbl->get_IsSelectionRequired(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_GetSelection(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetSelection(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider";
/* [object, uuid("EBDE8F92-6015-4826-B719-47521A81C67E"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Formula )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationObjects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationTypes )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_get_Formula(This,value) \
    ( (This)->lpVtbl->get_Formula(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_GetAnnotationObjects(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetAnnotationObjects(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_GetAnnotationTypes(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetAnnotationTypes(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider";
/* [object, uuid("15359093-BD99-4CFD-9F07-3B14B315E23D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemByName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_GetItemByName(This,name,returnValue) \
    ( (This)->lpVtbl->GetItemByName(This,name,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IStylesProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IStylesProvider[] = L"Windows.UI.Xaml.Automation.Provider.IStylesProvider";
/* [object, uuid("1A5B7A17-7C01-4BEC-9CD4-2DFA7DC246CD"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillColor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternColor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_ExtendedProperties(This,value) \
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_FillColor(This,value) \
    ( (This)->lpVtbl->get_FillColor(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_FillPatternColor(This,value) \
    ( (This)->lpVtbl->get_FillPatternColor(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_FillPatternStyle(This,value) \
    ( (This)->lpVtbl->get_FillPatternStyle(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_Shape(This,value) \
    ( (This)->lpVtbl->get_Shape(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_StyleId(This,value) \
    ( (This)->lpVtbl->get_StyleId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_get_StyleName(This,value) \
    ( (This)->lpVtbl->get_StyleName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider";
/* [object, uuid("3D60CECB-DA54-4AA3-B915-E3244427D4AC"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartListening )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType inputType
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_Cancel(This) \
    ( (This)->lpVtbl->Cancel(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_StartListening(This,inputType) \
    ( (This)->lpVtbl->StartListening(This,inputType) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITableItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableItemProvider";
/* [object, uuid("3B2C49CD-1DE2-4EE2-A3E1-FB553559D15D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetColumnHeaderItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetRowHeaderItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_GetColumnHeaderItems(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetColumnHeaderItems(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_GetRowHeaderItems(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetRowHeaderItems(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITableProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableProvider";
/* [object, uuid("7A8ED399-6824-4595-BAB3-464BC9A04417"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetColumnHeaders )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetRowHeaders )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_get_RowOrColumnMajor(This,value) \
    ( (This)->lpVtbl->get_RowOrColumnMajor(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_GetColumnHeaders(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetColumnHeaders(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_GetRowHeaders(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetRowHeaders(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextChildProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextChildProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextChildProvider";
/* [object, uuid("1133C336-A89B-4130-9BE6-55E33334F557"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextContainer )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_get_TextContainer(This,value) \
    ( (This)->lpVtbl->get_TextContainer(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_get_TextRange(This,value) \
    ( (This)->lpVtbl->get_TextRange(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextEditProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextEditProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextEditProvider";
/* [object, uuid("EA3605B4-3A05-400E-B5F9-4E91B40F6176"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetActiveComposition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetConversionTarget )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_GetActiveComposition(This,returnValue) \
    ( (This)->lpVtbl->GetActiveComposition(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_GetConversionTarget(This,returnValue) \
    ( (This)->lpVtbl->GetConversionTarget(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider";
/* [object, uuid("DB5BBC9F-4807-4F2A-8678-1B13F3C60E22"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * childElement,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint screenLocation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_get_DocumentRange(This,value) \
    ( (This)->lpVtbl->get_DocumentRange(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_get_SupportedTextSelection(This,value) \
    ( (This)->lpVtbl->get_SupportedTextSelection(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_GetSelection(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetSelection(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_GetVisibleRanges(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetVisibleRanges(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_RangeFromChild(This,childElement,returnValue) \
    ( (This)->lpVtbl->RangeFromChild(This,childElement,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_RangeFromPoint(This,screenLocation,returnValue) \
    ( (This)->lpVtbl->RangeFromPoint(This,screenLocation,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider2";
/* [object, uuid("DF1D48BC-0487-4E7F-9D5E-F09E77E41246"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RangeFromAnnotation )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * annotationElement,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetCaretRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
        /* [out] */__RPC__out boolean * isActive,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_RangeFromAnnotation(This,annotationElement,returnValue) \
    ( (This)->lpVtbl->RangeFromAnnotation(This,annotationElement,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_GetCaretRange(This,isActive,returnValue) \
    ( (This)->lpVtbl->GetCaretRange(This,isActive,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextRangeProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider";
/* [object, uuid("0274688D-06E9-4F66-9446-28A5BE98FBD0"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint targetEndpoint,
        /* [retval, out] */__RPC__out INT32 * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit
        );
    HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */INT32 attributeId,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [in] */boolean backward,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *FindText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__RPC__in HSTRING text,
        /* [in] */boolean backward,
        /* [in] */boolean ignoreCase,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */INT32 attributeId,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) DOUBLE * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */INT32 maxLength,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint targetEndpoint
        );
    HRESULT ( STDMETHODCALLTYPE *Select )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [in] */boolean alignToTop
        );
    HRESULT ( STDMETHODCALLTYPE *GetChildren )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
        /* [out] */__RPC__out UINT32 * __returnValueSize,
        /* [size_is(, *(__returnValueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__returnValueSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_Clone(This,returnValue) \
    ( (This)->lpVtbl->Clone(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_Compare(This,textRangeProvider,returnValue) \
    ( (This)->lpVtbl->Compare(This,textRangeProvider,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_CompareEndpoints(This,endpoint,textRangeProvider,targetEndpoint,returnValue) \
    ( (This)->lpVtbl->CompareEndpoints(This,endpoint,textRangeProvider,targetEndpoint,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_ExpandToEnclosingUnit(This,unit) \
    ( (This)->lpVtbl->ExpandToEnclosingUnit(This,unit) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FindAttribute(This,attributeId,value,backward,returnValue) \
    ( (This)->lpVtbl->FindAttribute(This,attributeId,value,backward,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_FindText(This,text,backward,ignoreCase,returnValue) \
    ( (This)->lpVtbl->FindText(This,text,backward,ignoreCase,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetAttributeValue(This,attributeId,returnValue) \
    ( (This)->lpVtbl->GetAttributeValue(This,attributeId,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetBoundingRectangles(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetBoundingRectangles(This,__returnValueSize,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetEnclosingElement(This,returnValue) \
    ( (This)->lpVtbl->GetEnclosingElement(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetText(This,maxLength,returnValue) \
    ( (This)->lpVtbl->GetText(This,maxLength,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_Move(This,unit,count,returnValue) \
    ( (This)->lpVtbl->Move(This,unit,count,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_MoveEndpointByUnit(This,endpoint,unit,count,returnValue) \
    ( (This)->lpVtbl->MoveEndpointByUnit(This,endpoint,unit,count,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_MoveEndpointByRange(This,endpoint,textRangeProvider,targetEndpoint) \
    ( (This)->lpVtbl->MoveEndpointByRange(This,endpoint,textRangeProvider,targetEndpoint) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_Select(This) \
    ( (This)->lpVtbl->Select(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_AddToSelection(This) \
    ( (This)->lpVtbl->AddToSelection(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_RemoveFromSelection(This) \
    ( (This)->lpVtbl->RemoveFromSelection(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_ScrollIntoView(This,alignToTop) \
    ( (This)->lpVtbl->ScrollIntoView(This,alignToTop) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_GetChildren(This,__returnValueSize,returnValue) \
    ( (This)->lpVtbl->GetChildren(This,__returnValueSize,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITextRangeProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2";
/* [object, uuid("D3BE3DFB-9F54-4642-A7A5-5C18D5EE2A3F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_ShowContextMenu(This) \
    ( (This)->lpVtbl->ShowContextMenu(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IToggleProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IToggleProvider[] = L"Windows.UI.Xaml.Automation.Provider.IToggleProvider";
/* [object, uuid("93B88290-656F-44F7-AEAF-78B8F944D062"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ToggleState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Toggle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_get_ToggleState(This,value) \
    ( (This)->lpVtbl->get_ToggleState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_Toggle(This) \
    ( (This)->lpVtbl->Toggle(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITransformProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider";
/* [object, uuid("79670FDD-F6A9-4A65-AF17-861DB799A2DA"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMove )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanResize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRotate )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [in] */DOUBLE x,
        /* [in] */DOUBLE y
        );
    HRESULT ( STDMETHODCALLTYPE *Resize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [in] */DOUBLE width,
        /* [in] */DOUBLE height
        );
    HRESULT ( STDMETHODCALLTYPE *Rotate )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
        /* [in] */DOUBLE degrees
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_get_CanMove(This,value) \
    ( (This)->lpVtbl->get_CanMove(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_get_CanResize(This,value) \
    ( (This)->lpVtbl->get_CanResize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_get_CanRotate(This,value) \
    ( (This)->lpVtbl->get_CanRotate(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_Move(This,x,y) \
    ( (This)->lpVtbl->Move(This,x,y) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_Resize(This,width,height) \
    ( (This)->lpVtbl->Resize(This,width,height) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_Rotate(This,degrees) \
    ( (This)->lpVtbl->Rotate(This,degrees) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.ITransformProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Automation.Provider.ITransformProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider2";
/* [object, uuid("A8B11756-A39F-4E97-8C7D-C1EA8DD633C5"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Zoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [in] */DOUBLE zoom
        );
    HRESULT ( STDMETHODCALLTYPE *ZoomByUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit zoomUnit
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_get_CanZoom(This,value) \
    ( (This)->lpVtbl->get_CanZoom(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_get_ZoomLevel(This,value) \
    ( (This)->lpVtbl->get_ZoomLevel(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_get_MaxZoom(This,value) \
    ( (This)->lpVtbl->get_MaxZoom(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_get_MinZoom(This,value) \
    ( (This)->lpVtbl->get_MinZoom(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_Zoom(This,zoom) \
    ( (This)->lpVtbl->Zoom(This,zoom) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_ZoomByUnit(This,zoomUnit) \
    ( (This)->lpVtbl->ZoomByUnit(This,zoomUnit) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IValueProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IValueProvider";
/* [object, uuid("2086B7A7-AC0E-47D1-AB9B-2A64292AFDF8"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_SetValue(This,value) \
    ( (This)->lpVtbl->SetValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider";
/* [object, uuid("17D4A04B-D658-48E0-A574-5A516C58DFA7"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Realize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_Realize(This) \
    ( (This)->lpVtbl->Realize(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.Provider.IWindowProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IWindowProvider[] = L"Windows.UI.Xaml.Automation.Provider.IWindowProvider";
/* [object, uuid("1BAA8B3D-38CF-415A-85D3-20E43A0EC1B1"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsModal )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTopmost )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maximizable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Minimizable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InteractionState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetVisualState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState state
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
        /* [in] */INT32 milliseconds,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_IsModal(This,value) \
    ( (This)->lpVtbl->get_IsModal(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_IsTopmost(This,value) \
    ( (This)->lpVtbl->get_IsTopmost(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_Maximizable(This,value) \
    ( (This)->lpVtbl->get_Maximizable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_Minimizable(This,value) \
    ( (This)->lpVtbl->get_Minimizable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_InteractionState(This,value) \
    ( (This)->lpVtbl->get_InteractionState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_get_VisualState(This,value) \
    ( (This)->lpVtbl->get_VisualState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_Close(This) \
    ( (This)->lpVtbl->Close(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_SetVisualState(This,state) \
    ( (This)->lpVtbl->SetVisualState(This,state) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_WaitForInputIdle(This,milliseconds,returnValue) \
    ( (This)->lpVtbl->WaitForInputIdle(This,milliseconds,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple";
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
#endif // __windows2Eui2Examl2Eautomation2Eprovider_p_h__

#endif // __windows2Eui2Examl2Eautomation2Eprovider_h__
