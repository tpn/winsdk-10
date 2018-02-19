/* Header file automatically generated from windows.ui.xaml.markup.idl */
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
#ifndef __windows2Eui2Examl2Emarkup_h__
#define __windows2Eui2Examl2Emarkup_h__
#ifndef __windows2Eui2Examl2Emarkup_p_h__
#define __windows2Eui2Examl2Emarkup_p_h__


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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Interop.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IComponentConnector;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector ABI::Windows::UI::Xaml::Markup::IComponentConnector

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IComponentConnector2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 ABI::Windows::UI::Xaml::Markup::IComponentConnector2

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IDataTemplateComponent;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent ABI::Windows::UI::Xaml::Markup::IDataTemplateComponent

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IMarkupExtension;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension ABI::Windows::UI::Xaml::Markup::IMarkupExtension

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IMarkupExtensionFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory ABI::Windows::UI::Xaml::Markup::IMarkupExtensionFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IMarkupExtensionOverrides;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides ABI::Windows::UI::Xaml::Markup::IMarkupExtensionOverrides

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlBinaryWriter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter ABI::Windows::UI::Xaml::Markup::IXamlBinaryWriter

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlBinaryWriterStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics ABI::Windows::UI::Xaml::Markup::IXamlBinaryWriterStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlBindingHelper;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper ABI::Windows::UI::Xaml::Markup::IXamlBindingHelper

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlBindingHelperStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics ABI::Windows::UI::Xaml::Markup::IXamlBindingHelperStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlMarkupHelper;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper ABI::Windows::UI::Xaml::Markup::IXamlMarkupHelper

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlMarkupHelperStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics ABI::Windows::UI::Xaml::Markup::IXamlMarkupHelperStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlMember;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember ABI::Windows::UI::Xaml::Markup::IXamlMember

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlMetadataProvider;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider ABI::Windows::UI::Xaml::Markup::IXamlMetadataProvider

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlReader;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader ABI::Windows::UI::Xaml::Markup::IXamlReader

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlReaderStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics ABI::Windows::UI::Xaml::Markup::IXamlReaderStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    interface IXamlType;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType ABI::Windows::UI::Xaml::Markup::IXamlType

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c875446a-587f-58da-897e-3bbe5ec7c30b"))
IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IIterator_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba666a00-1555-5df4-81a5-07d23f7ffceb"))
IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IIterable_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("92cd0a46-2266-5cd6-9293-e111299f2793"))
IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IVectorView_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#define DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2736b66b-daa3-5e0c-9842-6a0f44b5440b"))
IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*> : IVector_impl<ABI::Windows::Storage::Streams::IRandomAccessStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Streams.IRandomAccessStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*> __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t;
#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*>
//#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Streams::IRandomAccessStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
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





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    
                    typedef struct XamlBinaryWriterErrorInformation XamlBinaryWriterErrorInformation;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    
                    typedef struct XmlnsDefinition XmlnsDefinition;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */


















namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    class MarkupExtension;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    class XamlBinaryWriter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    class XamlBindingHelper;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    class XamlMarkupHelper;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    class XamlReader;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */







/*
 *
 * Struct Windows.UI.Xaml.Markup.XamlBinaryWriterErrorInformation
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
                namespace Markup {
                    /* [contract] */
                    struct XamlBinaryWriterErrorInformation
                    {
                        UINT32 InputStreamIndex;
                        UINT32 LineNumber;
                        UINT32 LinePosition;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Markup.XmlnsDefinition
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
                namespace Markup {
                    /* [contract] */
                    struct XmlnsDefinition
                    {
                        HSTRING XmlNamespace;
                        HSTRING Namespace;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IComponentConnector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector[] = L"Windows.UI.Xaml.Markup.IComponentConnector";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("F6790987-E6E5-47F2-92C6-ECCCE4BA159A"), contract] */
                    MIDL_INTERFACE("F6790987-E6E5-47F2-92C6-ECCCE4BA159A")
                    IComponentConnector : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Connect(
                            /* [in] */INT32 connectionId,
                            /* [in] */__RPC__in_opt IInspectable * target
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IComponentConnector=_uuidof(IComponentConnector);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IComponentConnector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector2[] = L"Windows.UI.Xaml.Markup.IComponentConnector2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("DC8F368B-ECCC-498E-B139-91142254D7AE"), contract] */
                    MIDL_INTERFACE("DC8F368B-ECCC-498E-B139-91142254D7AE")
                    IComponentConnector2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetBindingConnector(
                            /* [in] */INT32 connectionId,
                            /* [in] */__RPC__in_opt IInspectable * target,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IComponentConnector * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IComponentConnector2=_uuidof(IComponentConnector2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IDataTemplateComponent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IDataTemplateComponent[] = L"Windows.UI.Xaml.Markup.IDataTemplateComponent";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("08429DC8-8AB0-4747-AA9A-FEADFC8DA8E1"), contract] */
                    MIDL_INTERFACE("08429DC8-8AB0-4747-AA9A-FEADFC8DA8E1")
                    IDataTemplateComponent : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Recycle(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessBindings(
                            /* [in] */__RPC__in_opt IInspectable * item,
                            /* [in] */INT32 itemIndex,
                            /* [in] */INT32 phase,
                            /* [out] */__RPC__out INT32 * nextPhase
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDataTemplateComponent=_uuidof(IDataTemplateComponent);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtension[] = L"Windows.UI.Xaml.Markup.IMarkupExtension";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("1EE3416D-562B-486E-9EE5-0F0CBCC8048C"), exclusiveto, contract] */
                    MIDL_INTERFACE("1EE3416D-562B-486E-9EE5-0F0CBCC8048C")
                    IMarkupExtension : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMarkupExtension=_uuidof(IMarkupExtension);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtensionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionFactory[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("65329C05-FB5A-4567-9D55-5CDFBADA2739"), exclusiveto, contract] */
                    MIDL_INTERFACE("65329C05-FB5A-4567-9D55-5CDFBADA2739")
                    IMarkupExtensionFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IMarkupExtension * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMarkupExtensionFactory=_uuidof(IMarkupExtensionFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtensionOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionOverrides[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionOverrides";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("393779BF-B9C0-4FFB-A57F-58E7356E425F"), exclusiveto, contract] */
                    MIDL_INTERFACE("393779BF-B9C0-4FFB-A57F-58E7356E425F")
                    IMarkupExtensionOverrides : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE ProvideValue(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMarkupExtensionOverrides=_uuidof(IMarkupExtensionOverrides);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBinaryWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriter";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("829D2AD3-620A-46F6-845D-436A05927100"), exclusiveto, contract] */
                    MIDL_INTERFACE("829D2AD3-620A-46F6-845D-436A05927100")
                    IXamlBinaryWriter : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlBinaryWriter=_uuidof(IXamlBinaryWriter);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("0D8ED07A-9B82-4AA8-B68B-026F2DE1CC86"), exclusiveto, contract] */
                    MIDL_INTERFACE("0D8ED07A-9B82-4AA8-B68B-026F2DE1CC86")
                    IXamlBinaryWriterStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Write(
                            /* [in] */__RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * inputStreams,
                            /* [in] */__RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * outputStreams,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Markup::IXamlMetadataProvider * xamlMetadataProvider,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Markup::XamlBinaryWriterErrorInformation * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlBinaryWriterStatics=_uuidof(IXamlBinaryWriterStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBindingHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelper[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelper";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("FAA6FB06-8AB9-4EF7-8AE7-FBD30BBFD06D"), exclusiveto, contract] */
                    MIDL_INTERFACE("FAA6FB06-8AB9-4EF7-8AE7-FBD30BBFD06D")
                    IXamlBindingHelper : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlBindingHelper=_uuidof(IXamlBindingHelper);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBindingHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelperStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("F65CFB71-C80C-4FFA-86EE-558754EE336D"), exclusiveto, contract] */
                    MIDL_INTERFACE("F65CFB71-C80C-4FFA-86EE-558754EE336D")
                    IXamlBindingHelperStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataTemplateComponentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDataTemplateComponent(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IDataTemplateComponent * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDataTemplateComponent(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Markup::IDataTemplateComponent * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SuspendRendering(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * target
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ResumeRendering(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * target
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ConvertValue(
                            /* [in] */ABI::Windows::UI::Xaml::Interop::TypeName type,
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromString(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromBoolean(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromChar16(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */WCHAR value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromDateTime(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */ABI::Windows::Foundation::DateTime value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromDouble(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */DOUBLE value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromInt32(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */INT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromUInt32(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */UINT32 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromInt64(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */INT64 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromUInt64(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */UINT64 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromSingle(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */FLOAT value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromPoint(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */ABI::Windows::Foundation::Point value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromRect(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromSize(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */ABI::Windows::Foundation::Size value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromTimeSpan(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */ABI::Windows::Foundation::TimeSpan value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromByte(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */BYTE value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromUri(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPropertyFromObject(
                            /* [in] */__RPC__in_opt IInspectable * dependencyObject,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyProperty * propertyToSet,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlBindingHelperStatics=_uuidof(IXamlBindingHelperStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMarkupHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelper";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("D0E6673C-5342-44EF-85A7-ED327A739D9A"), exclusiveto, contract] */
                    MIDL_INTERFACE("D0E6673C-5342-44EF-85A7-ED327A739D9A")
                    IXamlMarkupHelper : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlMarkupHelper=_uuidof(IXamlMarkupHelper);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("C9BC3725-F34F-445C-81A2-6B72A5E8F072"), exclusiveto, contract] */
                    MIDL_INTERFACE("C9BC3725-F34F-445C-81A2-6B72A5E8F072")
                    IXamlMarkupHelperStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE UnloadObject(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlMarkupHelperStatics=_uuidof(IXamlMarkupHelperStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMember
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMember[] = L"Windows.UI.Xaml.Markup.IXamlMember";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("C541F58C-43A9-4216-B718-E0B11B14E93E"), contract] */
                    MIDL_INTERFACE("C541F58C-43A9-4216-B718-E0B11B14E93E")
                    IXamlMember : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAttachable(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDependencyProperty(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValue(
                            /* [in] */__RPC__in_opt IInspectable * instance,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetValue(
                            /* [in] */__RPC__in_opt IInspectable * instance,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlMember=_uuidof(IXamlMember);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMetadataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMetadataProvider[] = L"Windows.UI.Xaml.Markup.IXamlMetadataProvider";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("B3765D69-68A5-4B32-8861-FDB90C1F5836"), contract] */
                    MIDL_INTERFACE("B3765D69-68A5-4B32-8861-FDB90C1F5836")
                    IXamlMetadataProvider : IInspectable
                    {
                        /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE GetXamlType(
                            /* [in] */ABI::Windows::UI::Xaml::Interop::TypeName type,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * xamlType
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetXamlTypeByFullName(
                            /* [in] */__RPC__in HSTRING fullName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * xamlType
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetXmlnsDefinitions(
                            /* [out] */__RPC__out UINT32 * __definitionsSize,
                            /* [size_is(, *(__definitionsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__definitionsSize)) ABI::Windows::UI::Xaml::Markup::XmlnsDefinition * * definitions
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlMetadataProvider=_uuidof(IXamlMetadataProvider);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReader[] = L"Windows.UI.Xaml.Markup.IXamlReader";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("24374CF1-CCEB-48BF-A514-41B0186F84C2"), exclusiveto, contract] */
                    MIDL_INTERFACE("24374CF1-CCEB-48BF-A514-41B0186F84C2")
                    IXamlReader : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlReader=_uuidof(IXamlReader);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlReaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReaderStatics[] = L"Windows.UI.Xaml.Markup.IXamlReaderStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("9891C6BD-534F-4955-B85A-8A8DC0DCA602"), exclusiveto, contract] */
                    MIDL_INTERFACE("9891C6BD-534F-4955-B85A-8A8DC0DCA602")
                    IXamlReaderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Load(
                            /* [in] */__RPC__in HSTRING xaml,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadWithInitialTemplateValidation(
                            /* [in] */__RPC__in HSTRING xaml,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlReaderStatics=_uuidof(IXamlReaderStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlType[] = L"Windows.UI.Xaml.Markup.IXamlType";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Markup {
                    /* [object, uuid("7920EAB1-A2E5-479A-BD50-6CEF3C0B4970"), contract] */
                    MIDL_INTERFACE("7920EAB1-A2E5-479A-BD50-6CEF3C0B4970")
                    IXamlType : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BaseType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlMember * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsArray(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCollection(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsConstructible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDictionary(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMarkupExtension(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBindable(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnderlyingType(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Interop::TypeName * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ActivateInstance(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateFromString(
                            /* [in] */__RPC__in HSTRING value,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMember(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Markup::IXamlMember * * xamlMember
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddToVector(
                            /* [in] */__RPC__in_opt IInspectable * instance,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddToMap(
                            /* [in] */__RPC__in_opt IInspectable * instance,
                            /* [in] */__RPC__in_opt IInspectable * key,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RunInitializer(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlType=_uuidof(IXamlType);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Markup */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.MarkupExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IMarkupExtension ** Default Interface **
 *    Windows.UI.Xaml.Markup.IMarkupExtensionOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_MarkupExtension_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_MarkupExtension_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_MarkupExtension[] = L"Windows.UI.Xaml.Markup.MarkupExtension";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlBinaryWriter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBinaryWriter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBinaryWriter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.XamlBinaryWriter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlBindingHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlBindingHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBindingHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBindingHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBindingHelper[] = L"Windows.UI.Xaml.Markup.XamlBindingHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlMarkupHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlMarkupHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlMarkupHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.XamlMarkupHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlReaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlReader_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlReader[] = L"Windows.UI.Xaml.Markup.XamlReader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef  struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStreams__CIRandomAccessStream **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream;

typedef struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CStreams__CIRandomAccessStream **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This, /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl;

interface __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStreamVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation;


typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition;




























/*
 *
 * Struct Windows.UI.Xaml.Markup.XamlBinaryWriterErrorInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation
{
    UINT32 InputStreamIndex;
    UINT32 LineNumber;
    UINT32 LinePosition;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Markup.XmlnsDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition
{
    HSTRING XmlNamespace;
    HSTRING Namespace;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IComponentConnector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector[] = L"Windows.UI.Xaml.Markup.IComponentConnector";
/* [object, uuid("F6790987-E6E5-47F2-92C6-ECCCE4BA159A"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * This,
        /* [in] */INT32 connectionId,
        /* [in] */__RPC__in_opt IInspectable * target
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_Connect(This,connectionId,target) \
    ( (This)->lpVtbl->Connect(This,connectionId,target) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IComponentConnector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IComponentConnector2[] = L"Windows.UI.Xaml.Markup.IComponentConnector2";
/* [object, uuid("DC8F368B-ECCC-498E-B139-91142254D7AE"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBindingConnector )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2 * This,
        /* [in] */INT32 connectionId,
        /* [in] */__RPC__in_opt IInspectable * target,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_GetBindingConnector(This,connectionId,target,returnValue) \
    ( (This)->lpVtbl->GetBindingConnector(This,connectionId,target,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIComponentConnector2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IDataTemplateComponent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IDataTemplateComponent[] = L"Windows.UI.Xaml.Markup.IDataTemplateComponent";
/* [object, uuid("08429DC8-8AB0-4747-AA9A-FEADFC8DA8E1"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Recycle )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessBindings )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * This,
        /* [in] */__RPC__in_opt IInspectable * item,
        /* [in] */INT32 itemIndex,
        /* [in] */INT32 phase,
        /* [out] */__RPC__out INT32 * nextPhase
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_Recycle(This) \
    ( (This)->lpVtbl->Recycle(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_ProcessBindings(This,item,itemIndex,phase,nextPhase) \
    ( (This)->lpVtbl->ProcessBindings(This,item,itemIndex,phase,nextPhase) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtension[] = L"Windows.UI.Xaml.Markup.IMarkupExtension";
/* [object, uuid("1EE3416D-562B-486E-9EE5-0F0CBCC8048C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtensionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionFactory[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionFactory";
/* [object, uuid("65329C05-FB5A-4567-9D55-5CDFBADA2739"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtension * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IMarkupExtensionOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.MarkupExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IMarkupExtensionOverrides[] = L"Windows.UI.Xaml.Markup.IMarkupExtensionOverrides";
/* [object, uuid("393779BF-B9C0-4FFB-A57F-58E7356E425F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProvideValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverridesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_ProvideValue(This,returnValue) \
    ( (This)->lpVtbl->ProvideValue(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIMarkupExtensionOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBinaryWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriter";
/* [object, uuid("829D2AD3-620A-46F6-845D-436A05927100"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBinaryWriterStatics[] = L"Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics";
/* [object, uuid("0D8ED07A-9B82-4AA8-B68B-026F2DE1CC86"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * inputStreams,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CStorage__CStreams__CIRandomAccessStream * outputStreams,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * xamlMetadataProvider,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CMarkup_CXamlBinaryWriterErrorInformation * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_Write(This,inputStreams,outputStreams,xamlMetadataProvider,returnValue) \
    ( (This)->lpVtbl->Write(This,inputStreams,outputStreams,xamlMetadataProvider,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBinaryWriterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBindingHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelper[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelper";
/* [object, uuid("FAA6FB06-8AB9-4EF7-8AE7-FBD30BBFD06D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlBindingHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlBindingHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlBindingHelperStatics";
/* [object, uuid("F65CFB71-C80C-4FFA-86EE-558754EE336D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataTemplateComponentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataTemplateComponent )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDataTemplateComponent )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIDataTemplateComponent * value
        );
    HRESULT ( STDMETHODCALLTYPE *SuspendRendering )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * target
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeRendering )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * target
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromString )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromBoolean )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromChar16 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */WCHAR value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromDateTime )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromDouble )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromInt32 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUInt32 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromInt64 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */INT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUInt64 )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */UINT64 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromSingle )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */FLOAT value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromPoint )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromRect )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromSize )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromTimeSpan )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromByte )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */BYTE value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromUri )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyFromObject )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics * This,
        /* [in] */__RPC__in_opt IInspectable * dependencyObject,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * propertyToSet,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_get_DataTemplateComponentProperty(This,value) \
    ( (This)->lpVtbl->get_DataTemplateComponentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_GetDataTemplateComponent(This,element,value) \
    ( (This)->lpVtbl->GetDataTemplateComponent(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetDataTemplateComponent(This,element,value) \
    ( (This)->lpVtbl->SetDataTemplateComponent(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SuspendRendering(This,target) \
    ( (This)->lpVtbl->SuspendRendering(This,target) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_ResumeRendering(This,target) \
    ( (This)->lpVtbl->ResumeRendering(This,target) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_ConvertValue(This,type,value,returnValue) \
    ( (This)->lpVtbl->ConvertValue(This,type,value,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromString(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromString(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromBoolean(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromBoolean(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromChar16(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromChar16(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromDateTime(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromDateTime(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromDouble(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromDouble(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromInt32(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromInt32(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromUInt32(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromUInt32(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromInt64(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromInt64(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromUInt64(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromUInt64(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromSingle(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromSingle(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromPoint(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromPoint(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromRect(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromRect(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromSize(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromSize(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromTimeSpan(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromTimeSpan(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromByte(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromByte(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromUri(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromUri(This,dependencyObject,propertyToSet,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_SetPropertyFromObject(This,dependencyObject,propertyToSet,value) \
    ( (This)->lpVtbl->SetPropertyFromObject(This,dependencyObject,propertyToSet,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlBindingHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMarkupHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelper";
/* [object, uuid("D0E6673C-5342-44EF-85A7-ED327A739D9A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMarkupHelperStatics[] = L"Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics";
/* [object, uuid("C9BC3725-F34F-445C-81A2-6B72A5E8F072"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *UnloadObject )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_UnloadObject(This,element) \
    ( (This)->lpVtbl->UnloadObject(This,element) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMarkupHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMember
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMember[] = L"Windows.UI.Xaml.Markup.IXamlMember";
/* [object, uuid("C541F58C-43A9-4216-B718-E0B11B14E93E"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAttachable )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDependencyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [in] */__RPC__in_opt IInspectable * instance,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * This,
        /* [in] */__RPC__in_opt IInspectable * instance,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMemberVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_IsAttachable(This,value) \
    ( (This)->lpVtbl->get_IsAttachable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_IsDependencyProperty(This,value) \
    ( (This)->lpVtbl->get_IsDependencyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_TargetType(This,value) \
    ( (This)->lpVtbl->get_TargetType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_GetValue(This,instance,value) \
    ( (This)->lpVtbl->GetValue(This,instance,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_SetValue(This,instance,value) \
    ( (This)->lpVtbl->SetValue(This,instance,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlMetadataProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlMetadataProvider[] = L"Windows.UI.Xaml.Markup.IXamlMetadataProvider";
/* [object, uuid("B3765D69-68A5-4B32-8861-FDB90C1F5836"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *GetXamlType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * xamlType
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetXamlTypeByFullName )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
        /* [in] */__RPC__in HSTRING fullName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * xamlType
        );
    HRESULT ( STDMETHODCALLTYPE *GetXmlnsDefinitions )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider * This,
        /* [out] */__RPC__out UINT32 * __definitionsSize,
        /* [size_is(, *(__definitionsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__definitionsSize)) __x_ABI_CWindows_CUI_CXaml_CMarkup_CXmlnsDefinition * * definitions
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetXamlType(This,type,xamlType) \
    ( (This)->lpVtbl->GetXamlType(This,type,xamlType) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetXamlTypeByFullName(This,fullName,xamlType) \
    ( (This)->lpVtbl->GetXamlTypeByFullName(This,fullName,xamlType) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_GetXmlnsDefinitions(This,__definitionsSize,definitions) \
    ( (This)->lpVtbl->GetXmlnsDefinitions(This,__definitionsSize,definitions) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMetadataProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReader[] = L"Windows.UI.Xaml.Markup.IXamlReader";
/* [object, uuid("24374CF1-CCEB-48BF-A514-41B0186F84C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlReaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Markup.XamlReader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlReaderStatics[] = L"Windows.UI.Xaml.Markup.IXamlReaderStatics";
/* [object, uuid("9891C6BD-534F-4955-B85A-8A8DC0DCA602"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
        /* [in] */__RPC__in HSTRING xaml,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *LoadWithInitialTemplateValidation )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics * This,
        /* [in] */__RPC__in HSTRING xaml,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_Load(This,xaml,returnValue) \
    ( (This)->lpVtbl->Load(This,xaml,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_LoadWithInitialTemplateValidation(This,xaml,returnValue) \
    ( (This)->lpVtbl->LoadWithInitialTemplateValidation(This,xaml,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlReaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Markup.IXamlType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Markup_IXamlType[] = L"Windows.UI.Xaml.Markup.IXamlType";
/* [object, uuid("7920EAB1-A2E5-479A-BD50-6CEF3C0B4970"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BaseType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullName )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsArray )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCollection )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsConstructible )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDictionary )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMarkupExtension )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBindable )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnderlyingType )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName * value
        );
    HRESULT ( STDMETHODCALLTYPE *ActivateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromString )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *GetMember )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlMember * * xamlMember
        );
    HRESULT ( STDMETHODCALLTYPE *AddToVector )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [in] */__RPC__in_opt IInspectable * instance,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToMap )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This,
        /* [in] */__RPC__in_opt IInspectable * instance,
        /* [in] */__RPC__in_opt IInspectable * key,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RunInitializer )(
        __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_BaseType(This,value) \
    ( (This)->lpVtbl->get_BaseType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_ContentProperty(This,value) \
    ( (This)->lpVtbl->get_ContentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_FullName(This,value) \
    ( (This)->lpVtbl->get_FullName(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsArray(This,value) \
    ( (This)->lpVtbl->get_IsArray(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsCollection(This,value) \
    ( (This)->lpVtbl->get_IsCollection(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsConstructible(This,value) \
    ( (This)->lpVtbl->get_IsConstructible(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsDictionary(This,value) \
    ( (This)->lpVtbl->get_IsDictionary(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsMarkupExtension(This,value) \
    ( (This)->lpVtbl->get_IsMarkupExtension(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_IsBindable(This,value) \
    ( (This)->lpVtbl->get_IsBindable(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_ItemType(This,value) \
    ( (This)->lpVtbl->get_ItemType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_KeyType(This,value) \
    ( (This)->lpVtbl->get_KeyType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_get_UnderlyingType(This,value) \
    ( (This)->lpVtbl->get_UnderlyingType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_ActivateInstance(This,instance) \
    ( (This)->lpVtbl->ActivateInstance(This,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_CreateFromString(This,value,instance) \
    ( (This)->lpVtbl->CreateFromString(This,value,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_GetMember(This,name,xamlMember) \
    ( (This)->lpVtbl->GetMember(This,name,xamlMember) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_AddToVector(This,instance,value) \
    ( (This)->lpVtbl->AddToVector(This,instance,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_AddToMap(This,instance,key,value) \
    ( (This)->lpVtbl->AddToMap(This,instance,key,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_RunInitializer(This) \
    ( (This)->lpVtbl->RunInitializer(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMarkup_CIXamlType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.MarkupExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IMarkupExtension ** Default Interface **
 *    Windows.UI.Xaml.Markup.IMarkupExtensionOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_MarkupExtension_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_MarkupExtension_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_MarkupExtension[] = L"Windows.UI.Xaml.Markup.MarkupExtension";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlBinaryWriter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlBinaryWriterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlBinaryWriter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBinaryWriter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBinaryWriter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBinaryWriter[] = L"Windows.UI.Xaml.Markup.XamlBinaryWriter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlBindingHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlBindingHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlBindingHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBindingHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlBindingHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlBindingHelper[] = L"Windows.UI.Xaml.Markup.XamlBindingHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlMarkupHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlMarkupHelperStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlMarkupHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlMarkupHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlMarkupHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlMarkupHelper[] = L"Windows.UI.Xaml.Markup.XamlMarkupHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Markup.XamlReader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Markup.IXamlReaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Markup.IXamlReader ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlReader_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Markup_XamlReader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Markup_XamlReader[] = L"Windows.UI.Xaml.Markup.XamlReader";
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
#endif // __windows2Eui2Examl2Emarkup_p_h__

#endif // __windows2Eui2Examl2Emarkup_h__
