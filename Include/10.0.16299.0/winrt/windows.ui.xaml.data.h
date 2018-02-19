/* Header file automatically generated from windows.ui.xaml.data.idl */
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
#ifndef __windows2Eui2Examl2Edata_h__
#define __windows2Eui2Examl2Edata_h__
#ifndef __windows2Eui2Examl2Edata_p_h__
#define __windows2Eui2Examl2Edata_p_h__


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
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Interop.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICurrentChangingEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler ABI::Windows::UI::Xaml::Data::ICurrentChangingEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IPropertyChangedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler ABI::Windows::UI::Xaml::Data::IPropertyChangedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBinding;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding ABI::Windows::UI::Xaml::Data::IBinding

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBinding2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 ABI::Windows::UI::Xaml::Data::IBinding2

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase ABI::Windows::UI::Xaml::Data::IBindingBase

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingBaseFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory ABI::Windows::UI::Xaml::Data::IBindingBaseFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingExpression;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression ABI::Windows::UI::Xaml::Data::IBindingExpression

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingExpressionBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase ABI::Windows::UI::Xaml::Data::IBindingExpressionBase

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingExpressionBaseFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory ABI::Windows::UI::Xaml::Data::IBindingExpressionBaseFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingExpressionFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory ABI::Windows::UI::Xaml::Data::IBindingExpressionFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory ABI::Windows::UI::Xaml::Data::IBindingFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingOperations;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations ABI::Windows::UI::Xaml::Data::IBindingOperations

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IBindingOperationsStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics ABI::Windows::UI::Xaml::Data::IBindingOperationsStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICollectionView;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView ABI::Windows::UI::Xaml::Data::ICollectionView

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICollectionViewFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory ABI::Windows::UI::Xaml::Data::ICollectionViewFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICollectionViewGroup;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup ABI::Windows::UI::Xaml::Data::ICollectionViewGroup

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICollectionViewSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource ABI::Windows::UI::Xaml::Data::ICollectionViewSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICollectionViewSourceStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics ABI::Windows::UI::Xaml::Data::ICollectionViewSourceStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICurrentChangingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs ABI::Windows::UI::Xaml::Data::ICurrentChangingEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICurrentChangingEventArgsFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory ABI::Windows::UI::Xaml::Data::ICurrentChangingEventArgsFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICustomProperty;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty ABI::Windows::UI::Xaml::Data::ICustomProperty

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ICustomPropertyProvider;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider ABI::Windows::UI::Xaml::Data::ICustomPropertyProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IItemIndexRange;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange ABI::Windows::UI::Xaml::Data::IItemIndexRange

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IItemIndexRangeFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory ABI::Windows::UI::Xaml::Data::IItemIndexRangeFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IItemsRangeInfo;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo ABI::Windows::UI::Xaml::Data::IItemsRangeInfo

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface INotifyPropertyChanged;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged ABI::Windows::UI::Xaml::Data::INotifyPropertyChanged

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IPropertyChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs ABI::Windows::UI::Xaml::Data::IPropertyChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IPropertyChangedEventArgsFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory ABI::Windows::UI::Xaml::Data::IPropertyChangedEventArgsFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IRelativeSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource ABI::Windows::UI::Xaml::Data::IRelativeSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IRelativeSourceFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory ABI::Windows::UI::Xaml::Data::IRelativeSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ISelectionInfo;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo ABI::Windows::UI::Xaml::Data::ISelectionInfo

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface ISupportIncrementalLoading;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading ABI::Windows::UI::Xaml::Data::ISupportIncrementalLoading

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    interface IValueConverter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter ABI::Windows::UI::Xaml::Data::IValueConverter

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class ItemIndexRange;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9c223a26-0c81-59f6-a909-ba4966b4cf24"))
IIterator<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Data::ItemIndexRange*, ABI::Windows::UI::Xaml::Data::IItemIndexRange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Data.ItemIndexRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_t;
#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
//#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("273b8073-8c16-59c2-a616-0a534483c612"))
IIterable<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Data::ItemIndexRange*, ABI::Windows::UI::Xaml::Data::IItemIndexRange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Data.ItemIndexRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_t;
#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
//#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0b26b06-16e8-5767-a60b-ee3e32e43dfb"))
IVectorView<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Data::ItemIndexRange*, ABI::Windows::UI::Xaml::Data::IItemIndexRange*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Data.ItemIndexRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Data::ItemIndexRange*> __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Data::IItemIndexRange*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    struct LoadMoreItemsResult;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10fb738b-a63b-506e-9ed7-2eab37915221"))
IAsyncOperationCompletedHandler<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> : IAsyncOperationCompletedHandler_impl<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Xaml.Data.LoadMoreItemsResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c788089d-37ab-5ba2-b865-5a309acdfc4d"))
IAsyncOperation<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> : IAsyncOperation_impl<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Xaml.Data.LoadMoreItemsResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<struct ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult> __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t;
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult>
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Data::LoadMoreItemsResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_USE */





#ifndef DEF___FIIterator_1_IInspectable_USE
#define DEF___FIIterator_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("44a94f2d-04f8-5091-b336-be7892dd10be"))
IIterator<IInspectable*> : IIterator_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<IInspectable*> __FIIterator_1_IInspectable_t;
#define __FIIterator_1_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_IInspectable ABI::Windows::Foundation::Collections::IIterator<IInspectable*>
//#define __FIIterator_1_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_IInspectable_USE */





#ifndef DEF___FIIterable_1_IInspectable_USE
#define DEF___FIIterable_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("092b849b-60b1-52be-a44a-6fe8e933cbe4"))
IIterable<IInspectable*> : IIterable_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<IInspectable*> __FIIterable_1_IInspectable_t;
#define __FIIterable_1_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_IInspectable ABI::Windows::Foundation::Collections::IIterable<IInspectable*>
//#define __FIIterable_1_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_IInspectable_USE */





#ifndef DEF___FIVectorView_1_IInspectable_USE
#define DEF___FIVectorView_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a6487363-b074-5c60-ab16-866dce4ee54d"))
IVectorView<IInspectable*> : IVectorView_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<IInspectable*> __FIVectorView_1_IInspectable_t;
#define __FIVectorView_1_IInspectable ABI::Windows::Foundation::Collections::__FIVectorView_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_IInspectable ABI::Windows::Foundation::Collections::IVectorView<IInspectable*>
//#define __FIVectorView_1_IInspectable_t ABI::Windows::Foundation::Collections::IVectorView<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_IInspectable_USE */





#ifndef DEF___FIVector_1_IInspectable_USE
#define DEF___FIVector_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b32bdca4-5e52-5b27-bc5d-d66a1a268c2a"))
IVector<IInspectable*> : IVector_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<IInspectable*> __FIVector_1_IInspectable_t;
#define __FIVector_1_IInspectable ABI::Windows::Foundation::Collections::__FIVector_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_IInspectable ABI::Windows::Foundation::Collections::IVector<IInspectable*>
//#define __FIVector_1_IInspectable_t ABI::Windows::Foundation::Collections::IVector<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_IInspectable_USE */





#ifndef DEF___FVectorChangedEventHandler_1_IInspectable_USE
#define DEF___FVectorChangedEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b423a801-d35e-56b9-813b-00889536cb98"))
VectorChangedEventHandler<IInspectable*> : VectorChangedEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.VectorChangedEventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef VectorChangedEventHandler<IInspectable*> __FVectorChangedEventHandler_1_IInspectable_t;
#define __FVectorChangedEventHandler_1_IInspectable ABI::Windows::Foundation::Collections::__FVectorChangedEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FVectorChangedEventHandler_1_IInspectable ABI::Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable*>
//#define __FVectorChangedEventHandler_1_IInspectable_t ABI::Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FVectorChangedEventHandler_1_IInspectable_USE */





#ifndef DEF___FIObservableVector_1_IInspectable_USE
#define DEF___FIObservableVector_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7b81c56a-0985-518d-baa9-0da9ae009f65"))
IObservableVector<IInspectable*> : IObservableVector_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableVector`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableVector<IInspectable*> __FIObservableVector_1_IInspectable_t;
#define __FIObservableVector_1_IInspectable ABI::Windows::Foundation::Collections::__FIObservableVector_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableVector_1_IInspectable ABI::Windows::Foundation::Collections::IObservableVector<IInspectable*>
//#define __FIObservableVector_1_IInspectable_t ABI::Windows::Foundation::Collections::IObservableVector<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableVector_1_IInspectable_USE */





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
                namespace Interop {
                    
                    typedef struct TypeName TypeName;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class PropertyPath;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IPropertyPath;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIPropertyPath ABI::Windows::UI::Xaml::IPropertyPath

#endif // ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    
                    typedef enum BindingMode : int BindingMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    
                    typedef enum RelativeSourceMode : int RelativeSourceMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    
                    typedef enum UpdateSourceTrigger : int UpdateSourceTrigger;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    
                    typedef struct LoadMoreItemsResult LoadMoreItemsResult;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class Binding;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class BindingBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class BindingExpression;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class BindingExpressionBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class BindingOperations;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class CollectionViewSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class CurrentChangingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class PropertyChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    class RelativeSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */












/*
 *
 * Struct Windows.UI.Xaml.Data.BindingMode
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
                namespace Data {
                    /* [v1_enum, contract] */
                    enum BindingMode : int
                    {
                        BindingMode_OneWay = 1,
                        BindingMode_OneTime = 2,
                        BindingMode_TwoWay = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.RelativeSourceMode
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
                namespace Data {
                    /* [v1_enum, contract] */
                    enum RelativeSourceMode : int
                    {
                        RelativeSourceMode_None = 0,
                        RelativeSourceMode_TemplatedParent = 1,
                        RelativeSourceMode_Self = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.UpdateSourceTrigger
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
                namespace Data {
                    /* [v1_enum, contract] */
                    enum UpdateSourceTrigger : int
                    {
                        UpdateSourceTrigger_Default = 0,
                        UpdateSourceTrigger_PropertyChanged = 1,
                        UpdateSourceTrigger_Explicit = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        UpdateSourceTrigger_LostFocus = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.LoadMoreItemsResult
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
                namespace Data {
                    /* [contract] */
                    struct LoadMoreItemsResult
                    {
                        UINT32 Count;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Data.CurrentChangingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("F3888DB8-139F-4DCE-8DC9-F7F1444D1185"), contract] */
                    MIDL_INTERFACE("F3888DB8-139F-4DCE-8DC9-F7F1444D1185")
                    ICurrentChangingEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::ICurrentChangingEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICurrentChangingEventHandler=_uuidof(ICurrentChangingEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Data.PropertyChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("50F19C16-0A22-4D8E-A089-1EA9951657D2"), contract] */
                    MIDL_INTERFACE("50F19C16-0A22-4D8E-A089-1EA9951657D2")
                    IPropertyChangedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IPropertyChangedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPropertyChangedEventHandler=_uuidof(IPropertyChangedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBinding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding[] = L"Windows.UI.Xaml.Data.IBinding";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("3F7A0C6B-D00F-4730-8C1D-48E16C46F9CA"), exclusiveto, contract] */
                    MIDL_INTERFACE("3F7A0C6B-D00F-4730-8C1D-48E16C46F9CA")
                    IBinding : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IPropertyPath * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Path(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IPropertyPath * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Data::BindingMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::UI::Xaml::Data::BindingMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelativeSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IRelativeSource * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelativeSource(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IRelativeSource * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ElementName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Converter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IValueConverter * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Converter(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IValueConverter * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConverterParameter(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ConverterParameter(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConverterLanguage(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ConverterLanguage(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBinding=_uuidof(IBinding);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBinding2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding2[] = L"Windows.UI.Xaml.Data.IBinding2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("34F96FCB-0406-48B3-9E82-F333EC4C6910"), exclusiveto, contract] */
                    MIDL_INTERFACE("34F96FCB-0406-48B3-9E82-F333EC4C6910")
                    IBinding2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FallbackValue(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FallbackValue(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetNullValue(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TargetNullValue(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdateSourceTrigger(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Data::UpdateSourceTrigger * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UpdateSourceTrigger(
                            /* [in] */ABI::Windows::UI::Xaml::Data::UpdateSourceTrigger value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBinding2=_uuidof(IBinding2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBase[] = L"Windows.UI.Xaml.Data.IBindingBase";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("1589A2AB-3D15-49BC-A447-8A5448E58870"), exclusiveto, contract] */
                    MIDL_INTERFACE("1589A2AB-3D15-49BC-A447-8A5448E58870")
                    IBindingBase : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingBase=_uuidof(IBindingBase);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingBaseFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("22DAFC3A-7701-4666-A1BA-9859BDCFEC34"), exclusiveto, contract] */
                    MIDL_INTERFACE("22DAFC3A-7701-4666-A1BA-9859BDCFEC34")
                    IBindingBaseFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IBindingBase * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingBaseFactory=_uuidof(IBindingBaseFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpression
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpression
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpression[] = L"Windows.UI.Xaml.Data.IBindingExpression";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("516A19A5-C2FD-4A9E-9FD3-9AA42F995A3C"), exclusiveto, contract] */
                    MIDL_INTERFACE("516A19A5-C2FD-4A9E-9FD3-9AA42F995A3C")
                    IBindingExpression : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataItem(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentBinding(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IBinding * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateSource(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingExpression=_uuidof(IBindingExpression);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpressionBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBase[] = L"Windows.UI.Xaml.Data.IBindingExpressionBase";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("FDED3154-E954-4F67-8FB6-6ED79B3A1CB3"), exclusiveto, contract] */
                    MIDL_INTERFACE("FDED3154-E954-4F67-8FB6-6ED79B3A1CB3")
                    IBindingExpressionBase : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingExpressionBase=_uuidof(IBindingExpressionBase);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpressionBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionBaseFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("EA7116A7-C2D9-4375-B471-66B9C48C7930"), exclusiveto, contract] */
                    MIDL_INTERFACE("EA7116A7-C2D9-4375-B471-66B9C48C7930")
                    IBindingExpressionBaseFactory : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingExpressionBaseFactory=_uuidof(IBindingExpressionBaseFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpression
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("1CB55CD9-DB72-40B3-A2B5-24EE6EA5C328"), exclusiveto, contract] */
                    MIDL_INTERFACE("1CB55CD9-DB72-40B3-A2B5-24EE6EA5C328")
                    IBindingExpressionFactory : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingExpressionFactory=_uuidof(IBindingExpressionFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingFactory[] = L"Windows.UI.Xaml.Data.IBindingFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("FF42BB08-C39E-4F7E-8434-A1569083883C"), exclusiveto, contract] */
                    MIDL_INTERFACE("FF42BB08-C39E-4F7E-8434-A1569083883C")
                    IBindingFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IBinding * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingFactory=_uuidof(IBindingFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingOperations
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperations[] = L"Windows.UI.Xaml.Data.IBindingOperations";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("6FFFD738-9839-419C-A17A-4B3604E1524E"), exclusiveto, contract] */
                    MIDL_INTERFACE("6FFFD738-9839-419C-A17A-4B3604E1524E")
                    IBindingOperations : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingOperations=_uuidof(IBindingOperations);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingOperationsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingOperations
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperationsStatics[] = L"Windows.UI.Xaml.Data.IBindingOperationsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("E155EF73-95A0-4AAB-8C7D-2A47DA073C79"), exclusiveto, contract] */
                    MIDL_INTERFACE("E155EF73-95A0-4AAB-8C7D-2A47DA073C79")
                    IBindingOperationsStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetBinding(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * target,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * dp,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IBindingBase * binding
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindingOperationsStatics=_uuidof(IBindingOperationsStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IObservableVector_1_IInspectable
 *     Windows.Foundation.Collections.IVector_1_IInspectable
 *     Windows.Foundation.Collections.IIterable_1_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionView[] = L"Windows.UI.Xaml.Data.ICollectionView";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("8BE8BFE4-DBEF-44DF-8126-A31A89121DDC"), contract] */
                    MIDL_INTERFACE("8BE8BFE4-DBEF-44DF-8126-A31A89121DDC")
                    ICollectionView : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentItem(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPosition(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCurrentAfterLast(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCurrentBeforeFirst(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CollectionGroups(
                            /* [retval, out] */__RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasMoreItems(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CurrentChanged(
                            /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CurrentChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CurrentChanging(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::ICurrentChangingEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CurrentChanging(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentTo(
                            /* [in] */__RPC__in_opt IInspectable * item,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentToPosition(
                            /* [in] */INT32 index,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentToFirst(
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentToLast(
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentToNext(
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveCurrentToPrevious(
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadMoreItemsAsync(
                            /* [in] */UINT32 count,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICollectionView=_uuidof(ICollectionView);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewFactory[] = L"Windows.UI.Xaml.Data.ICollectionViewFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("34D4AAF4-8E72-4950-9192-ECD07D399D0A"), contract] */
                    MIDL_INTERFACE("34D4AAF4-8E72-4950-9192-ECD07D399D0A")
                    ICollectionViewFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICollectionView * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICollectionViewFactory=_uuidof(ICollectionViewFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewGroup[] = L"Windows.UI.Xaml.Data.ICollectionViewGroup";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("7E01B9D8-D7B5-48B6-B31C-5BB5BDF5F09B"), contract] */
                    MIDL_INTERFACE("7E01B9D8-D7B5-48B6-B31C-5BB5BDF5F09B")
                    ICollectionViewGroup : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Group(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GroupItems(
                            /* [retval, out] */__RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICollectionViewGroup=_uuidof(ICollectionViewGroup);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CollectionViewSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSource[] = L"Windows.UI.Xaml.Data.ICollectionViewSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("A66A1146-D2FB-4EAD-BE9F-3578A466DCFE"), exclusiveto, contract] */
                    MIDL_INTERFACE("A66A1146-D2FB-4EAD-BE9F-3578A466DCFE")
                    ICollectionViewSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_View(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICollectionView * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSourceGrouped(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsSourceGrouped(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemsPath(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IPropertyPath * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ItemsPath(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IPropertyPath * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICollectionViewSource=_uuidof(ICollectionViewSource);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CollectionViewSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSourceStatics[] = L"Windows.UI.Xaml.Data.ICollectionViewSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("173A0710-46AF-4C0C-818B-21B6EF81BF65"), exclusiveto, contract] */
                    MIDL_INTERFACE("173A0710-46AF-4C0C-818B-21B6EF81BF65")
                    ICollectionViewSourceStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSourceGroupedProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemsPathProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICollectionViewSourceStatics=_uuidof(ICollectionViewSourceStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICurrentChangingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("F9891E29-51CC-47DD-A5B9-35DC4914AF69"), exclusiveto, contract] */
                    MIDL_INTERFACE("F9891E29-51CC-47DD-A5B9-35DC4914AF69")
                    ICurrentChangingEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cancel(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Cancel(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCancelable(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICurrentChangingEventArgs=_uuidof(ICurrentChangingEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("153BBEEE-62F3-48CF-8183-8BE26DE3A66E"), exclusiveto, contract] */
                    MIDL_INTERFACE("153BBEEE-62F3-48CF-8183-8BE26DE3A66E")
                    ICurrentChangingEventArgsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICurrentChangingEventArgs * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithCancelableParameter(
                            /* [in] */boolean isCancelable,
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICurrentChangingEventArgs * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICurrentChangingEventArgsFactory=_uuidof(ICurrentChangingEventArgsFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomProperty[] = L"Windows.UI.Xaml.Data.ICustomProperty";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("30DA92C0-23E8-42A0-AE7C-734A0E5D2782"), contract] */
                    MIDL_INTERFACE("30DA92C0-23E8-42A0-AE7C-734A0E5D2782")
                    ICustomProperty : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Interop::TypeName * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValue(
                            /* [in] */__RPC__in_opt IInspectable * target,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetValue(
                            /* [in] */__RPC__in_opt IInspectable * target,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIndexedValue(
                            /* [in] */__RPC__in_opt IInspectable * target,
                            /* [in] */__RPC__in_opt IInspectable * index,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIndexedValue(
                            /* [in] */__RPC__in_opt IInspectable * target,
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [in] */__RPC__in_opt IInspectable * index
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanWrite(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRead(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomProperty=_uuidof(ICustomProperty);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICustomPropertyProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomPropertyProvider[] = L"Windows.UI.Xaml.Data.ICustomPropertyProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("7C925755-3E48-42B4-8677-76372267033F"), contract] */
                    MIDL_INTERFACE("7C925755-3E48-42B4-8677-76372267033F")
                    ICustomPropertyProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetCustomProperty(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICustomProperty * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIndexedProperty(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */ABI::Windows::UI::Xaml::Interop::TypeName type,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::ICustomProperty * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStringRepresentation(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Interop::TypeName * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomPropertyProvider=_uuidof(ICustomPropertyProvider);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemIndexRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.ItemIndexRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRange[] = L"Windows.UI.Xaml.Data.IItemIndexRange";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("83B834BE-0583-4A26-9B64-8BF4A2F65704"), exclusiveto, contract] */
                    MIDL_INTERFACE("83B834BE-0583-4A26-9B64-8BF4A2F65704")
                    IItemIndexRange : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FirstIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IItemIndexRange=_uuidof(IItemIndexRange);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemIndexRangeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.ItemIndexRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRangeFactory[] = L"Windows.UI.Xaml.Data.IItemIndexRangeFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("86E2C440-2E7A-4C7D-A664-E8ABF07BFC7E"), exclusiveto, contract] */
                    MIDL_INTERFACE("86E2C440-2E7A-4C7D-A664-E8ABF07BFC7E")
                    IItemIndexRangeFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */INT32 firstIndex,
                            /* [in] */UINT32 length,
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IItemIndexRange * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IItemIndexRangeFactory=_uuidof(IItemIndexRangeFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemsRangeInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemsRangeInfo[] = L"Windows.UI.Xaml.Data.IItemsRangeInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("F05F5665-71FD-45A2-BE13-A081D294A68D"), contract] */
                    MIDL_INTERFACE("F05F5665-71FD-45A2-BE13-A081D294A68D")
                    IItemsRangeInfo : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RangesChanged(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IItemIndexRange * visibleRange,
                            /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * trackedItems
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IItemsRangeInfo=_uuidof(IItemsRangeInfo);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_INotifyPropertyChanged[] = L"Windows.UI.Xaml.Data.INotifyPropertyChanged";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("CF75D69C-F2F4-486B-B302-BB4C09BAEBFA"), contract] */
                    MIDL_INTERFACE("CF75D69C-F2F4-486B-B302-BB4C09BAEBFA")
                    INotifyPropertyChanged : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PropertyChanged(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IPropertyChangedEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PropertyChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotifyPropertyChanged=_uuidof(INotifyPropertyChanged);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("4F33A9A0-5CF4-47A4-B16F-D7FAAF17457E"), exclusiveto, contract] */
                    MIDL_INTERFACE("4F33A9A0-5CF4-47A4-B16F-D7FAAF17457E")
                    IPropertyChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PropertyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPropertyChangedEventArgs=_uuidof(IPropertyChangedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("6DCC9C03-E0C7-4EEE-8EA9-37E3406EEB1C"), exclusiveto, contract] */
                    MIDL_INTERFACE("6DCC9C03-E0C7-4EEE-8EA9-37E3406EEB1C")
                    IPropertyChangedEventArgsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IPropertyChangedEventArgs * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPropertyChangedEventArgsFactory=_uuidof(IPropertyChangedEventArgsFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IRelativeSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.RelativeSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSource[] = L"Windows.UI.Xaml.Data.IRelativeSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("2397CE84-2822-483A-B499-D0F031E06C6B"), exclusiveto, contract] */
                    MIDL_INTERFACE("2397CE84-2822-483A-B499-D0F031E06C6B")
                    IRelativeSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Data::RelativeSourceMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::UI::Xaml::Data::RelativeSourceMode value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRelativeSource=_uuidof(IRelativeSource);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IRelativeSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.RelativeSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSourceFactory[] = L"Windows.UI.Xaml.Data.IRelativeSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("EF8392CD-446E-4F93-AACB-9B1255577460"), exclusiveto, contract] */
                    MIDL_INTERFACE("EF8392CD-446E-4F93-AACB-9B1255577460")
                    IRelativeSourceFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Data::IRelativeSource * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRelativeSourceFactory=_uuidof(IRelativeSourceFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ISelectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISelectionInfo[] = L"Windows.UI.Xaml.Data.ISelectionInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("2E12CA86-E1ED-4245-BE49-207E42AEC524"), contract] */
                    MIDL_INTERFACE("2E12CA86-E1ED-4245-BE49-207E42AEC524")
                    ISelectionInfo : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SelectRange(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IItemIndexRange * itemIndexRange
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeselectRange(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Data::IItemIndexRange * itemIndexRange
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsSelected(
                            /* [in] */INT32 index,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSelectedRanges(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISelectionInfo=_uuidof(ISelectionInfo);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ISupportIncrementalLoading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISupportIncrementalLoading[] = L"Windows.UI.Xaml.Data.ISupportIncrementalLoading";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("7F5EE992-7694-4E6C-A51B-E34BF43DE743"), contract] */
                    MIDL_INTERFACE("7F5EE992-7694-4E6C-A51B-E34BF43DE743")
                    ISupportIncrementalLoading : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE LoadMoreItemsAsync(
                            /* [in] */UINT32 count,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * operation
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasMoreItems(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISupportIncrementalLoading=_uuidof(ISupportIncrementalLoading);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IValueConverter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IValueConverter[] = L"Windows.UI.Xaml.Data.IValueConverter";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Data {
                    /* [object, uuid("E6F2FEF0-0712-487F-B313-F300B8D79AA1"), contract] */
                    MIDL_INTERFACE("E6F2FEF0-0712-487F-B313-F300B8D79AA1")
                    IValueConverter : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Convert(
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [in] */ABI::Windows::UI::Xaml::Interop::TypeName targetType,
                            /* [in] */__RPC__in_opt IInspectable * parameter,
                            /* [in] */__RPC__in HSTRING language,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ConvertBack(
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [in] */ABI::Windows::UI::Xaml::Interop::TypeName targetType,
                            /* [in] */__RPC__in_opt IInspectable * parameter,
                            /* [in] */__RPC__in HSTRING language,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IValueConverter=_uuidof(IValueConverter);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Data */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.Binding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBinding ** Default Interface **
 *    Windows.UI.Xaml.Data.IBinding2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_Binding_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_Binding_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_Binding[] = L"Windows.UI.Xaml.Data.Binding";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingBase[] = L"Windows.UI.Xaml.Data.BindingBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingExpression
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingExpression ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpression_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpression_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpression[] = L"Windows.UI.Xaml.Data.BindingExpression";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingExpressionBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingExpressionBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpressionBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpressionBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpressionBase[] = L"Windows.UI.Xaml.Data.BindingExpressionBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Data.IBindingOperationsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingOperations ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingOperations_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingOperations_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingOperations[] = L"Windows.UI.Xaml.Data.BindingOperations";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.CollectionViewSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Data.ICollectionViewSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.ICollectionViewSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_CollectionViewSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_CollectionViewSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CollectionViewSource[] = L"Windows.UI.Xaml.Data.CollectionViewSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.ICurrentChangingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_CurrentChangingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_CurrentChangingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.CurrentChangingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.ItemIndexRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IItemIndexRange ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_ItemIndexRange_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_ItemIndexRange_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_ItemIndexRange[] = L"Windows.UI.Xaml.Data.ItemIndexRange";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IPropertyChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_PropertyChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_PropertyChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_PropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.PropertyChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.RelativeSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IRelativeSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_RelativeSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_RelativeSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_RelativeSource[] = L"Windows.UI.Xaml.Data.RelativeSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding __x_ABI_CWindows_CUI_CXaml_CData_CIBinding;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;

#endif // ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CData__CItemIndexRange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult;

#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult;

typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult_INTERFACE_DEFINED__



#if !defined(____FIIterator_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_IInspectable;

typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;

interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_IInspectable;

typedef  struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_IInspectable **first);

    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;

interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIVectorView_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_IInspectable __FIVectorView_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_IInspectable;

typedef struct __FIVectorView_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_IInspectable * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_IInspectable * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_IInspectable * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out IInspectable * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_IInspectable * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_IInspectable * This,
            /* [in] */ IInspectable * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_IInspectable * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_IInspectableVtbl;

interface __FIVectorView_1_IInspectable
{
    CONST_VTBL struct __FIVectorView_1_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_IInspectable_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_IInspectable_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_IInspectable_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIVector_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIVector_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIVector_1_IInspectable __FIVector_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_IInspectable;

typedef struct __FIVector_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_IInspectable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt IInspectable * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_IInspectable * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_IInspectable **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ __RPC__in IInspectable * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in IInspectable * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in IInspectable * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_IInspectable * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_IInspectable * This, /* [in] */ __RPC__in IInspectable * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_IInspectable * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) IInspectable * *value);

    END_INTERFACE
} __FIVector_1_IInspectableVtbl;

interface __FIVector_1_IInspectable
{
    CONST_VTBL struct __FIVector_1_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_IInspectable_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_IInspectable_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_IInspectable_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_IInspectable_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_IInspectable_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_IInspectable_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_IInspectable_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_IInspectable_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_IInspectable_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FVectorChangedEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FVectorChangedEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FVectorChangedEventHandler_1_IInspectable __FVectorChangedEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FVectorChangedEventHandler_1_IInspectable;

typedef interface __FIObservableVector_1_IInspectable __FIObservableVector_1_IInspectable;

typedef struct __FVectorChangedEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in_opt __FIObservableVector_1_IInspectable *sender,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_IInspectableVtbl;

interface __FVectorChangedEventHandler_1_IInspectable
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FVectorChangedEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FVectorChangedEventHandler_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FVectorChangedEventHandler_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FVectorChangedEventHandler_1_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FVectorChangedEventHandler_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableVector_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableVector_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableVector_1_IInspectable __FIObservableVector_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableVector_1_IInspectable;

typedef struct __FIObservableVector_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_IInspectable * This,
        /* [in] */ __RPC__in_opt __FVectorChangedEventHandler_1_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);

    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_IInspectable * This, /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_IInspectableVtbl;

interface __FIObservableVector_1_IInspectable
{
    CONST_VTBL struct __FIObservableVector_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableVector_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableVector_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableVector_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableVector_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableVector_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableVector_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableVector_1_IInspectable_add_VectorChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) ) 
#define __FIObservableVector_1_IInspectable_remove_VectorChanged(This,token)	\
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) ) 

#endif /* COBJMACROS */


#endif // ____FIObservableVector_1_IInspectable_INTERFACE_DEFINED__



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



#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIPropertyPath __x_ABI_CWindows_CUI_CXaml_CIPropertyPath;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIPropertyPath_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger;


typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult;






















































/*
 *
 * Struct Windows.UI.Xaml.Data.BindingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode
{
    BindingMode_OneWay = 1,
    BindingMode_OneTime = 2,
    BindingMode_TwoWay = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.RelativeSourceMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode
{
    RelativeSourceMode_None = 0,
    RelativeSourceMode_TemplatedParent = 1,
    RelativeSourceMode_Self = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.UpdateSourceTrigger
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger
{
    UpdateSourceTrigger_Default = 0,
    UpdateSourceTrigger_PropertyChanged = 1,
    UpdateSourceTrigger_Explicit = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    UpdateSourceTrigger_LostFocus = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Data.LoadMoreItemsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CXaml_CData_CLoadMoreItemsResult
{
    UINT32 Count;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Data.CurrentChangingEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__
/* [object, uuid("F3888DB8-139F-4DCE-8DC9-F7F1444D1185"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Data.PropertyChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("50F19C16-0A22-4D8E-A089-1EA9951657D2"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBinding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding[] = L"Windows.UI.Xaml.Data.IBinding";
/* [object, uuid("3F7A0C6B-D00F-4730-8C1D-48E16C46F9CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CBindingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CData_CBindingMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelativeSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelativeSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ElementName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Converter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Converter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConverterParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ConverterParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConverterLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ConverterLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_Path(This,value) \
    ( (This)->lpVtbl->get_Path(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_Path(This,value) \
    ( (This)->lpVtbl->put_Path(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_RelativeSource(This,value) \
    ( (This)->lpVtbl->get_RelativeSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_RelativeSource(This,value) \
    ( (This)->lpVtbl->put_RelativeSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_ElementName(This,value) \
    ( (This)->lpVtbl->get_ElementName(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_ElementName(This,value) \
    ( (This)->lpVtbl->put_ElementName(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_Converter(This,value) \
    ( (This)->lpVtbl->get_Converter(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_Converter(This,value) \
    ( (This)->lpVtbl->put_Converter(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_ConverterParameter(This,value) \
    ( (This)->lpVtbl->get_ConverterParameter(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_ConverterParameter(This,value) \
    ( (This)->lpVtbl->put_ConverterParameter(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_get_ConverterLanguage(This,value) \
    ( (This)->lpVtbl->get_ConverterLanguage(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding_put_ConverterLanguage(This,value) \
    ( (This)->lpVtbl->put_ConverterLanguage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBinding2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBinding2[] = L"Windows.UI.Xaml.Data.IBinding2";
/* [object, uuid("34F96FCB-0406-48B3-9E82-F333EC4C6910"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FallbackValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FallbackValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetNullValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TargetNullValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdateSourceTrigger )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UpdateSourceTrigger )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CData_CUpdateSourceTrigger value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_get_FallbackValue(This,value) \
    ( (This)->lpVtbl->get_FallbackValue(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_put_FallbackValue(This,value) \
    ( (This)->lpVtbl->put_FallbackValue(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_get_TargetNullValue(This,value) \
    ( (This)->lpVtbl->get_TargetNullValue(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_put_TargetNullValue(This,value) \
    ( (This)->lpVtbl->put_TargetNullValue(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_get_UpdateSourceTrigger(This,value) \
    ( (This)->lpVtbl->get_UpdateSourceTrigger(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_put_UpdateSourceTrigger(This,value) \
    ( (This)->lpVtbl->put_UpdateSourceTrigger(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBinding2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBinding2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBase[] = L"Windows.UI.Xaml.Data.IBindingBase";
/* [object, uuid("1589A2AB-3D15-49BC-A447-8A5448E58870"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingBaseFactory";
/* [object, uuid("22DAFC3A-7701-4666-A1BA-9859BDCFEC34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpression
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpression
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpression[] = L"Windows.UI.Xaml.Data.IBindingExpression";
/* [object, uuid("516A19A5-C2FD-4A9E-9FD3-9AA42F995A3C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataItem )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentBinding )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateSource )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_get_DataItem(This,value) \
    ( (This)->lpVtbl->get_DataItem(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_get_ParentBinding(This,value) \
    ( (This)->lpVtbl->get_ParentBinding(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_UpdateSource(This) \
    ( (This)->lpVtbl->UpdateSource(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpression_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpressionBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBase[] = L"Windows.UI.Xaml.Data.IBindingExpressionBase";
/* [object, uuid("FDED3154-E954-4F67-8FB6-6ED79B3A1CB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpressionBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionBaseFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionBaseFactory";
/* [object, uuid("EA7116A7-C2D9-4375-B471-66B9C48C7930"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingExpressionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingExpression
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingExpressionFactory[] = L"Windows.UI.Xaml.Data.IBindingExpressionFactory";
/* [object, uuid("1CB55CD9-DB72-40B3-A2B5-24EE6EA5C328"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingExpressionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.Binding
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingFactory[] = L"Windows.UI.Xaml.Data.IBindingFactory";
/* [object, uuid("FF42BB08-C39E-4F7E-8434-A1569083883C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBinding * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingOperations
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperations[] = L"Windows.UI.Xaml.Data.IBindingOperations";
/* [object, uuid("6FFFD738-9839-419C-A17A-4B3604E1524E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IBindingOperationsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.BindingOperations
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IBindingOperationsStatics[] = L"Windows.UI.Xaml.Data.IBindingOperationsStatics";
/* [object, uuid("E155EF73-95A0-4AAB-8C7D-2A47DA073C79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBinding )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * target,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * dp,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIBindingBase * binding
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_SetBinding(This,target,dp,binding) \
    ( (This)->lpVtbl->SetBinding(This,target,dp,binding) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIBindingOperationsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IObservableVector_1_IInspectable
 *     Windows.Foundation.Collections.IVector_1_IInspectable
 *     Windows.Foundation.Collections.IIterable_1_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionView[] = L"Windows.UI.Xaml.Data.ICollectionView";
/* [object, uuid("8BE8BFE4-DBEF-44DF-8126-A31A89121DDC"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentItem )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAfterLast )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCurrentBeforeFirst )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CollectionGroups )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasMoreItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CurrentChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CurrentChanging )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanging )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentTo )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */__RPC__in_opt IInspectable * item,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToPosition )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */INT32 index,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToFirst )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToLast )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToNext )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *MoveCurrentToPrevious )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *LoadMoreItemsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * This,
        /* [in] */UINT32 count,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_CurrentItem(This,value) \
    ( (This)->lpVtbl->get_CurrentItem(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_CurrentPosition(This,value) \
    ( (This)->lpVtbl->get_CurrentPosition(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_IsCurrentAfterLast(This,value) \
    ( (This)->lpVtbl->get_IsCurrentAfterLast(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_IsCurrentBeforeFirst(This,value) \
    ( (This)->lpVtbl->get_IsCurrentBeforeFirst(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_CollectionGroups(This,value) \
    ( (This)->lpVtbl->get_CollectionGroups(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_get_HasMoreItems(This,value) \
    ( (This)->lpVtbl->get_HasMoreItems(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_add_CurrentChanged(This,value,token) \
    ( (This)->lpVtbl->add_CurrentChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_remove_CurrentChanged(This,token) \
    ( (This)->lpVtbl->remove_CurrentChanged(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_add_CurrentChanging(This,value,token) \
    ( (This)->lpVtbl->add_CurrentChanging(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_remove_CurrentChanging(This,token) \
    ( (This)->lpVtbl->remove_CurrentChanging(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentTo(This,item,returnValue) \
    ( (This)->lpVtbl->MoveCurrentTo(This,item,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentToPosition(This,index,returnValue) \
    ( (This)->lpVtbl->MoveCurrentToPosition(This,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentToFirst(This,returnValue) \
    ( (This)->lpVtbl->MoveCurrentToFirst(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentToLast(This,returnValue) \
    ( (This)->lpVtbl->MoveCurrentToLast(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentToNext(This,returnValue) \
    ( (This)->lpVtbl->MoveCurrentToNext(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_MoveCurrentToPrevious(This,returnValue) \
    ( (This)->lpVtbl->MoveCurrentToPrevious(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_LoadMoreItemsAsync(This,count,returnValue) \
    ( (This)->lpVtbl->LoadMoreItemsAsync(This,count,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewFactory[] = L"Windows.UI.Xaml.Data.ICollectionViewFactory";
/* [object, uuid("34D4AAF4-8E72-4950-9192-ECD07D399D0A"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateView )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_CreateView(This,result) \
    ( (This)->lpVtbl->CreateView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewGroup[] = L"Windows.UI.Xaml.Data.ICollectionViewGroup";
/* [object, uuid("7E01B9D8-D7B5-48B6-B31C-5BB5BDF5F09B"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GroupItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __FIObservableVector_1_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_get_Group(This,value) \
    ( (This)->lpVtbl->get_Group(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_get_GroupItems(This,value) \
    ( (This)->lpVtbl->get_GroupItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CollectionViewSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSource[] = L"Windows.UI.Xaml.Data.ICollectionViewSource";
/* [object, uuid("A66A1146-D2FB-4EAD-BE9F-3578A466DCFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_View )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICollectionView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSourceGrouped )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsSourceGrouped )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemsPath )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ItemsPath )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIPropertyPath * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_get_View(This,value) \
    ( (This)->lpVtbl->get_View(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_get_IsSourceGrouped(This,value) \
    ( (This)->lpVtbl->get_IsSourceGrouped(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_put_IsSourceGrouped(This,value) \
    ( (This)->lpVtbl->put_IsSourceGrouped(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_get_ItemsPath(This,value) \
    ( (This)->lpVtbl->get_ItemsPath(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_put_ItemsPath(This,value) \
    ( (This)->lpVtbl->put_ItemsPath(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICollectionViewSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CollectionViewSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICollectionViewSourceStatics[] = L"Windows.UI.Xaml.Data.ICollectionViewSourceStatics";
/* [object, uuid("173A0710-46AF-4C0C-818B-21B6EF81BF65"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSourceGroupedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemsPathProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_get_SourceProperty(This,value) \
    ( (This)->lpVtbl->get_SourceProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_get_ViewProperty(This,value) \
    ( (This)->lpVtbl->get_ViewProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_get_IsSourceGroupedProperty(This,value) \
    ( (This)->lpVtbl->get_IsSourceGroupedProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_get_ItemsPathProperty(This,value) \
    ( (This)->lpVtbl->get_ItemsPathProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICollectionViewSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICurrentChangingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgs";
/* [object, uuid("F9891E29-51CC-47DD-A5B9-35DC4914AF69"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCancelable )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_get_Cancel(This,value) \
    ( (This)->lpVtbl->get_Cancel(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_put_Cancel(This,value) \
    ( (This)->lpVtbl->put_Cancel(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_get_IsCancelable(This,value) \
    ( (This)->lpVtbl->get_IsCancelable(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICurrentChangingEventArgsFactory[] = L"Windows.UI.Xaml.Data.ICurrentChangingEventArgsFactory";
/* [object, uuid("153BBEEE-62F3-48CF-8183-8BE26DE3A66E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCancelableParameter )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory * This,
        /* [in] */boolean isCancelable,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgs * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_CreateWithCancelableParameter(This,isCancelable,outer,inner,instance) \
    ( (This)->lpVtbl->CreateWithCancelableParameter(This,isCancelable,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICurrentChangingEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICustomProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomProperty[] = L"Windows.UI.Xaml.Data.ICustomProperty";
/* [object, uuid("30DA92C0-23E8-42A0-AE7C-734A0E5D2782"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [in] */__RPC__in_opt IInspectable * target,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [in] */__RPC__in_opt IInspectable * target,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndexedValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [in] */__RPC__in_opt IInspectable * target,
        /* [in] */__RPC__in_opt IInspectable * index,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndexedValue )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [in] */__RPC__in_opt IInspectable * target,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [in] */__RPC__in_opt IInspectable * index
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanWrite )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRead )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_GetValue(This,target,returnValue) \
    ( (This)->lpVtbl->GetValue(This,target,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_SetValue(This,target,value) \
    ( (This)->lpVtbl->SetValue(This,target,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_GetIndexedValue(This,target,index,returnValue) \
    ( (This)->lpVtbl->GetIndexedValue(This,target,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_SetIndexedValue(This,target,value,index) \
    ( (This)->lpVtbl->SetIndexedValue(This,target,value,index) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_get_CanWrite(This,value) \
    ( (This)->lpVtbl->get_CanWrite(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_get_CanRead(This,value) \
    ( (This)->lpVtbl->get_CanRead(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ICustomPropertyProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ICustomPropertyProvider[] = L"Windows.UI.Xaml.Data.ICustomPropertyProvider";
/* [object, uuid("7C925755-3E48-42B4-8677-76372267033F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCustomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndexedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CICustomProperty * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetStringRepresentation )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetCustomProperty(This,name,returnValue) \
    ( (This)->lpVtbl->GetCustomProperty(This,name,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetIndexedProperty(This,name,type,returnValue) \
    ( (This)->lpVtbl->GetIndexedProperty(This,name,type,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_GetStringRepresentation(This,returnValue) \
    ( (This)->lpVtbl->GetStringRepresentation(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CICustomPropertyProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemIndexRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.ItemIndexRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRange[] = L"Windows.UI.Xaml.Data.IItemIndexRange";
/* [object, uuid("83B834BE-0583-4A26-9B64-8BF4A2F65704"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FirstIndex )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastIndex )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_get_FirstIndex(This,value) \
    ( (This)->lpVtbl->get_FirstIndex(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_get_LastIndex(This,value) \
    ( (This)->lpVtbl->get_LastIndex(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemIndexRangeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.ItemIndexRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemIndexRangeFactory[] = L"Windows.UI.Xaml.Data.IItemIndexRangeFactory";
/* [object, uuid("86E2C440-2E7A-4C7D-A664-E8ABF07BFC7E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory * This,
        /* [in] */INT32 firstIndex,
        /* [in] */UINT32 length,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_CreateInstance(This,firstIndex,length,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,firstIndex,length,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRangeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IItemsRangeInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IItemsRangeInfo[] = L"Windows.UI.Xaml.Data.IItemsRangeInfo";
/* [object, uuid("F05F5665-71FD-45A2-BE13-A081D294A68D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RangesChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * visibleRange,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * trackedItems
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_RangesChanged(This,visibleRange,trackedItems) \
    ( (This)->lpVtbl->RangesChanged(This,visibleRange,trackedItems) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIItemsRangeInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.INotifyPropertyChanged
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_INotifyPropertyChanged[] = L"Windows.UI.Xaml.Data.INotifyPropertyChanged";
/* [object, uuid("CF75D69C-F2F4-486B-B302-BB4C09BAEBFA"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PropertyChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PropertyChanged )(
        __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChangedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_add_PropertyChanged(This,value,token) \
    ( (This)->lpVtbl->add_PropertyChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_remove_PropertyChanged(This,token) \
    ( (This)->lpVtbl->remove_PropertyChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CINotifyPropertyChanged_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgs";
/* [object, uuid("4F33A9A0-5CF4-47A4-B16F-D7FAAF17457E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PropertyName )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_get_PropertyName(This,value) \
    ( (This)->lpVtbl->get_PropertyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IPropertyChangedEventArgsFactory[] = L"Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory";
/* [object, uuid("6DCC9C03-E0C7-4EEE-8EA9-37E3406EEB1C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgs * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_CreateInstance(This,name,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,name,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIPropertyChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IRelativeSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.RelativeSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSource[] = L"Windows.UI.Xaml.Data.IRelativeSource";
/* [object, uuid("2397CE84-2822-483A-B499-D0F031E06C6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CData_CRelativeSourceMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IRelativeSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Data.RelativeSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IRelativeSourceFactory[] = L"Windows.UI.Xaml.Data.IRelativeSourceFactory";
/* [object, uuid("EF8392CD-446E-4F93-AACB-9B1255577460"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSource * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIRelativeSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ISelectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISelectionInfo[] = L"Windows.UI.Xaml.Data.ISelectionInfo";
/* [object, uuid("2E12CA86-E1ED-4245-BE49-207E42AEC524"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SelectRange )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * itemIndexRange
        );
    HRESULT ( STDMETHODCALLTYPE *DeselectRange )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CData_CIItemIndexRange * itemIndexRange
        );
    HRESULT ( STDMETHODCALLTYPE *IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
        /* [in] */INT32 index,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedRanges )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CData__CItemIndexRange * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_SelectRange(This,itemIndexRange) \
    ( (This)->lpVtbl->SelectRange(This,itemIndexRange) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_DeselectRange(This,itemIndexRange) \
    ( (This)->lpVtbl->DeselectRange(This,itemIndexRange) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_IsSelected(This,index,returnValue) \
    ( (This)->lpVtbl->IsSelected(This,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_GetSelectedRanges(This,returnValue) \
    ( (This)->lpVtbl->GetSelectedRanges(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISelectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.ISupportIncrementalLoading
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_ISupportIncrementalLoading[] = L"Windows.UI.Xaml.Data.ISupportIncrementalLoading";
/* [object, uuid("7F5EE992-7694-4E6C-A51B-E34BF43DE743"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadMoreItemsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
        /* [in] */UINT32 count,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CData__CLoadMoreItemsResult * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasMoreItems )(
        __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoadingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_LoadMoreItemsAsync(This,count,operation) \
    ( (This)->lpVtbl->LoadMoreItemsAsync(This,count,operation) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_get_HasMoreItems(This,value) \
    ( (This)->lpVtbl->get_HasMoreItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CISupportIncrementalLoading_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Data.IValueConverter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Data_IValueConverter[] = L"Windows.UI.Xaml.Data.IValueConverter";
/* [object, uuid("E6F2FEF0-0712-487F-B313-F300B8D79AA1"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Convert )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName targetType,
        /* [in] */__RPC__in_opt IInspectable * parameter,
        /* [in] */__RPC__in HSTRING language,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertBack )(
        __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName targetType,
        /* [in] */__RPC__in_opt IInspectable * parameter,
        /* [in] */__RPC__in HSTRING language,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_Convert(This,value,targetType,parameter,language,returnValue) \
    ( (This)->lpVtbl->Convert(This,value,targetType,parameter,language,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_ConvertBack(This,value,targetType,parameter,language,returnValue) \
    ( (This)->lpVtbl->ConvertBack(This,value,targetType,parameter,language,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CData_CIValueConverter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.Binding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBinding ** Default Interface **
 *    Windows.UI.Xaml.Data.IBinding2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_Binding_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_Binding_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_Binding[] = L"Windows.UI.Xaml.Data.Binding";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingBase[] = L"Windows.UI.Xaml.Data.BindingBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingExpression
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingExpression ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpression_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpression_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpression[] = L"Windows.UI.Xaml.Data.BindingExpression";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingExpressionBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingExpressionBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpressionBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingExpressionBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingExpressionBase[] = L"Windows.UI.Xaml.Data.BindingExpressionBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.BindingOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Data.IBindingOperationsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IBindingOperations ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_BindingOperations_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_BindingOperations_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_BindingOperations[] = L"Windows.UI.Xaml.Data.BindingOperations";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.CollectionViewSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Data.ICollectionViewSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.ICollectionViewSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_CollectionViewSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_CollectionViewSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CollectionViewSource[] = L"Windows.UI.Xaml.Data.CollectionViewSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.CurrentChangingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.ICurrentChangingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_CurrentChangingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_CurrentChangingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_CurrentChangingEventArgs[] = L"Windows.UI.Xaml.Data.CurrentChangingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.ItemIndexRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IItemIndexRange ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_ItemIndexRange_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_ItemIndexRange_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_ItemIndexRange[] = L"Windows.UI.Xaml.Data.ItemIndexRange";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.PropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IPropertyChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_PropertyChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_PropertyChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_PropertyChangedEventArgs[] = L"Windows.UI.Xaml.Data.PropertyChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Data.RelativeSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Data.IRelativeSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Data_RelativeSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Data_RelativeSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Data_RelativeSource[] = L"Windows.UI.Xaml.Data.RelativeSource";
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
#endif // __windows2Eui2Examl2Edata_p_h__

#endif // __windows2Eui2Examl2Edata_h__
