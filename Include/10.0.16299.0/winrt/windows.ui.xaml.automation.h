/* Header file automatically generated from windows.ui.xaml.automation.idl */
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
#ifndef __windows2Eui2Examl2Eautomation_h__
#define __windows2Eui2Examl2Eautomation_h__
#ifndef __windows2Eui2Examl2Eautomation_p_h__
#define __windows2Eui2Examl2Eautomation_p_h__


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
#include "Windows.UI.Xaml.Automation.Peers.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAnnotationPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAnnotationPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IAnnotationPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationAnnotation;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationAnnotationFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory ABI::Windows::UI::Xaml::Automation::IAutomationAnnotationFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationAnnotationStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics ABI::Windows::UI::Xaml::Automation::IAutomationAnnotationStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics4

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics5;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics5

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationElementIdentifiersStatics6;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 ABI::Windows::UI::Xaml::Automation::IAutomationElementIdentifiersStatics6

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationProperties;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties ABI::Windows::UI::Xaml::Automation::IAutomationProperties

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics4

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics5;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics5

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IAutomationPropertiesStatics6;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 ABI::Windows::UI::Xaml::Automation::IAutomationPropertiesStatics6

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDockPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IDockPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDockPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IDockPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDragPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IDragPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDragPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IDragPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDropTargetPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IDropTargetPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IDropTargetPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IExpandCollapsePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers ABI::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IExpandCollapsePatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IExpandCollapsePatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IGridItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IGridItemPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IGridItemPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IGridPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IGridPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IGridPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IGridPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IMultipleViewPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IMultipleViewPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IMultipleViewPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IRangeValuePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers ABI::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IRangeValuePatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IRangeValuePatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IScrollPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IScrollPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IScrollPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IScrollPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISelectionItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers ABI::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISelectionItemPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ISelectionItemPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISelectionPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers ABI::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISelectionPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ISelectionPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISpreadsheetItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers ABI::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ISpreadsheetItemPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ISpreadsheetItemPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IStylesPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IStylesPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IStylesPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IStylesPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITableItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers ABI::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITableItemPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ITableItemPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITablePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers ABI::Windows::UI::Xaml::Automation::ITablePatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITablePatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ITablePatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITogglePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers ABI::Windows::UI::Xaml::Automation::ITogglePatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITogglePatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ITogglePatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITransformPattern2Identifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers ABI::Windows::UI::Xaml::Automation::ITransformPattern2Identifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITransformPattern2IdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics ABI::Windows::UI::Xaml::Automation::ITransformPattern2IdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITransformPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers ABI::Windows::UI::Xaml::Automation::ITransformPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface ITransformPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::ITransformPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IValuePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers ABI::Windows::UI::Xaml::Automation::IValuePatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IValuePatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IValuePatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IWindowPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers ABI::Windows::UI::Xaml::Automation::IWindowPatternIdentifiers

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    interface IWindowPatternIdentifiersStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics ABI::Windows::UI::Xaml::Automation::IWindowPatternIdentifiersStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class AutomationAnnotation;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7ed32ba3-db0c-5a54-ab43-30628afbc2d8"))
IIterator<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*, ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c6e210cb-1c7b-5e6a-936b-61d4e536a291"))
IIterable<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*, ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a4b8a26c-9009-5394-98c8-98107e80db61"))
IVectorView<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*, ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("73596c82-f6e5-5b57-8dc5-556cb7a8fbe6"))
IVector<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*, ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Automation.AutomationAnnotation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Automation::AutomationAnnotation*> __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t;
#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
//#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CUIElement_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1d1f9d60-d53b-57f7-b144-8f7c487846e8"))
IIterator<ABI::Windows::UI::Xaml::UIElement*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::UIElement*> __FIIterator_1_Windows__CUI__CXaml__CUIElement_t;
#define __FIIterator_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CUIElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::IUIElement*>
//#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CUIElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CUIElement_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("42e26ae1-d357-57e8-bb48-f75c9ff69d91"))
IIterable<ABI::Windows::UI::Xaml::UIElement*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::UIElement*> __FIIterable_1_Windows__CUI__CXaml__CUIElement_t;
#define __FIIterable_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CUIElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::IUIElement*>
//#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CUIElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CUIElement_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f3864c10-14a4-5516-b1d9-63b6579429b1"))
IVectorView<ABI::Windows::UI::Xaml::UIElement*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::UIElement*> __FIVectorView_1_Windows__CUI__CXaml__CUIElement_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CUIElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::IUIElement*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CUIElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CUIElement_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CUIElement_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4c1e3ac-8768-5b9d-a661-f63330b8507b"))
IVector<ABI::Windows::UI::Xaml::UIElement*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::UIElement*, ABI::Windows::UI::Xaml::IUIElement*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.UIElement>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::UIElement*> __FIVector_1_Windows__CUI__CXaml__CUIElement_t;
#define __FIVector_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CUIElement_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CUIElement ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::IUIElement*>
//#define __FIVector_1_Windows__CUI__CXaml__CUIElement_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::IUIElement*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CUIElement_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CDependencyObject_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("29f8d454-905d-587e-b9d8-bfd418805a65"))
IIterator<ABI::Windows::UI::Xaml::DependencyObject*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::DependencyObject*, ABI::Windows::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::DependencyObject*> __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_t;
#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CDependencyObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::IDependencyObject*>
//#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CDependencyObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CDependencyObject_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f66c6bd3-55b4-5bbb-b82a-6d9ce383091a"))
IIterable<ABI::Windows::UI::Xaml::DependencyObject*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::DependencyObject*, ABI::Windows::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::DependencyObject*> __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_t;
#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CDependencyObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::IDependencyObject*>
//#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CDependencyObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe750d77-1307-5df2-a021-1c7a8d6b80ad"))
IVectorView<ABI::Windows::UI::Xaml::DependencyObject*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::DependencyObject*, ABI::Windows::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::DependencyObject*> __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::IDependencyObject*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CDependencyObject_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CDependencyObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("771b857e-ab5c-5db8-a021-397c92cdc44c"))
IVector<ABI::Windows::UI::Xaml::DependencyObject*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::DependencyObject*, ABI::Windows::UI::Xaml::IDependencyObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.DependencyObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::DependencyObject*> __FIVector_1_Windows__CUI__CXaml__CDependencyObject_t;
#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CDependencyObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::IDependencyObject*>
//#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::IDependencyObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CDependencyObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Peers {
                        
                        typedef enum AccessibilityView : int AccessibilityView;
                        
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
                    namespace Peers {
                        
                        typedef enum AutomationLandmarkType : int AutomationLandmarkType;
                        
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
                    namespace Peers {
                        
                        typedef enum AutomationLiveSetting : int AutomationLiveSetting;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Peers */} /* ABI */







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
                    
                    typedef enum AutomationActiveEnd : int AutomationActiveEnd;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationAnimationStyle : int AutomationAnimationStyle;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationBulletStyle : int AutomationBulletStyle;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationCaretBidiMode : int AutomationCaretBidiMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationCaretPosition : int AutomationCaretPosition;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationFlowDirections : int AutomationFlowDirections;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationOutlineStyles : int AutomationOutlineStyles;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationStyleId : int AutomationStyleId;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationTextDecorationLineStyle : int AutomationTextDecorationLineStyle;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    
                    typedef enum AutomationTextEditChangeType : int AutomationTextEditChangeType;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

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
                    class AnnotationPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class AutomationElementIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class AutomationProperties;
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


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class DockPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class DragPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class DropTargetPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class ExpandCollapsePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class GridItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class GridPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class MultipleViewPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class RangeValuePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class ScrollPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class SelectionItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class SelectionPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class SpreadsheetItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class StylesPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class TableItemPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class TablePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class TogglePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class TransformPattern2Identifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class TransformPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class ValuePatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    class WindowPatternIdentifiers;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */












/*
 *
 * Struct Windows.UI.Xaml.Automation.AnnotationType
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AnnotationType : int
                    {
                        AnnotationType_Unknown = 60000,
                        AnnotationType_SpellingError = 60001,
                        AnnotationType_GrammarError = 60002,
                        AnnotationType_Comment = 60003,
                        AnnotationType_FormulaError = 60004,
                        AnnotationType_TrackChanges = 60005,
                        AnnotationType_Header = 60006,
                        AnnotationType_Footer = 60007,
                        AnnotationType_Highlighted = 60008,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        AnnotationType_Endnote = 60009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        AnnotationType_Footnote = 60010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_InsertionChange = 60011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_DeletionChange = 60012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_MoveChange = 60013,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_FormatChange = 60014,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_UnsyncedChange = 60015,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_EditingLockedChange = 60016,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_ExternalChange = 60017,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_ConflictingChange = 60018,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_Author = 60019,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_AdvancedProofingIssue = 60020,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_DataValidationError = 60021,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        AnnotationType_CircularReferenceError = 60022,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationActiveEnd
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationActiveEnd : int
                    {
                        AutomationActiveEnd_None = 0,
                        AutomationActiveEnd_Start = 1,
                        AutomationActiveEnd_End = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationAnimationStyle
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationAnimationStyle : int
                    {
                        AutomationAnimationStyle_None = 0,
                        AutomationAnimationStyle_LasVegasLights = 1,
                        AutomationAnimationStyle_BlinkingBackground = 2,
                        AutomationAnimationStyle_SparkleText = 3,
                        AutomationAnimationStyle_MarchingBlackAnts = 4,
                        AutomationAnimationStyle_MarchingRedAnts = 5,
                        AutomationAnimationStyle_Shimmer = 6,
                        AutomationAnimationStyle_Other = 7,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationBulletStyle
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationBulletStyle : int
                    {
                        AutomationBulletStyle_None = 0,
                        AutomationBulletStyle_HollowRoundBullet = 1,
                        AutomationBulletStyle_FilledRoundBullet = 2,
                        AutomationBulletStyle_HollowSquareBullet = 3,
                        AutomationBulletStyle_FilledSquareBullet = 4,
                        AutomationBulletStyle_DashBullet = 5,
                        AutomationBulletStyle_Other = 6,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationCaretBidiMode
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationCaretBidiMode : int
                    {
                        AutomationCaretBidiMode_LTR = 0,
                        AutomationCaretBidiMode_RTL = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationCaretPosition
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationCaretPosition : int
                    {
                        AutomationCaretPosition_Unknown = 0,
                        AutomationCaretPosition_EndOfLine = 1,
                        AutomationCaretPosition_BeginningOfLine = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationFlowDirections
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationFlowDirections : int
                    {
                        AutomationFlowDirections_Default = 0,
                        AutomationFlowDirections_RightToLeft = 1,
                        AutomationFlowDirections_BottomToTop = 2,
                        AutomationFlowDirections_Vertical = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationOutlineStyles
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationOutlineStyles : int
                    {
                        AutomationOutlineStyles_None = 0,
                        AutomationOutlineStyles_Outline = 1,
                        AutomationOutlineStyles_Shadow = 2,
                        AutomationOutlineStyles_Engraved = 3,
                        AutomationOutlineStyles_Embossed = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationStyleId
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationStyleId : int
                    {
                        AutomationStyleId_Heading1 = 70001,
                        AutomationStyleId_Heading2 = 70002,
                        AutomationStyleId_Heading3 = 70003,
                        AutomationStyleId_Heading4 = 70004,
                        AutomationStyleId_Heading5 = 70005,
                        AutomationStyleId_Heading6 = 70006,
                        AutomationStyleId_Heading7 = 70007,
                        AutomationStyleId_Heading8 = 70008,
                        AutomationStyleId_Heading9 = 70009,
                        AutomationStyleId_Title = 70010,
                        AutomationStyleId_Subtitle = 70011,
                        AutomationStyleId_Normal = 70012,
                        AutomationStyleId_Emphasis = 70013,
                        AutomationStyleId_Quote = 70014,
                        AutomationStyleId_BulletedList = 70015,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationTextDecorationLineStyle
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationTextDecorationLineStyle : int
                    {
                        AutomationTextDecorationLineStyle_None = 0,
                        AutomationTextDecorationLineStyle_Single = 1,
                        AutomationTextDecorationLineStyle_WordsOnly = 2,
                        AutomationTextDecorationLineStyle_Double = 3,
                        AutomationTextDecorationLineStyle_Dot = 4,
                        AutomationTextDecorationLineStyle_Dash = 5,
                        AutomationTextDecorationLineStyle_DashDot = 6,
                        AutomationTextDecorationLineStyle_DashDotDot = 7,
                        AutomationTextDecorationLineStyle_Wavy = 8,
                        AutomationTextDecorationLineStyle_ThickSingle = 9,
                        AutomationTextDecorationLineStyle_DoubleWavy = 10,
                        AutomationTextDecorationLineStyle_ThickWavy = 11,
                        AutomationTextDecorationLineStyle_LongDash = 12,
                        AutomationTextDecorationLineStyle_ThickDash = 13,
                        AutomationTextDecorationLineStyle_ThickDashDot = 14,
                        AutomationTextDecorationLineStyle_ThickDashDotDot = 15,
                        AutomationTextDecorationLineStyle_ThickDot = 16,
                        AutomationTextDecorationLineStyle_ThickLongDash = 17,
                        AutomationTextDecorationLineStyle_Other = 18,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationTextEditChangeType
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum AutomationTextEditChangeType : int
                    {
                        AutomationTextEditChangeType_None = 0,
                        AutomationTextEditChangeType_AutoCorrect = 1,
                        AutomationTextEditChangeType_Composition = 2,
                        AutomationTextEditChangeType_CompositionFinalized = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.DockPosition
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum DockPosition : int
                    {
                        DockPosition_Top = 0,
                        DockPosition_Left = 1,
                        DockPosition_Bottom = 2,
                        DockPosition_Right = 3,
                        DockPosition_Fill = 4,
                        DockPosition_None = 5,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ExpandCollapseState
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum ExpandCollapseState : int
                    {
                        ExpandCollapseState_Collapsed = 0,
                        ExpandCollapseState_Expanded = 1,
                        ExpandCollapseState_PartiallyExpanded = 2,
                        ExpandCollapseState_LeafNode = 3,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.RowOrColumnMajor
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum RowOrColumnMajor : int
                    {
                        RowOrColumnMajor_RowMajor = 0,
                        RowOrColumnMajor_ColumnMajor = 1,
                        RowOrColumnMajor_Indeterminate = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ScrollAmount
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum ScrollAmount : int
                    {
                        ScrollAmount_LargeDecrement = 0,
                        ScrollAmount_SmallDecrement = 1,
                        ScrollAmount_NoAmount = 2,
                        ScrollAmount_LargeIncrement = 3,
                        ScrollAmount_SmallIncrement = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.SupportedTextSelection
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum SupportedTextSelection : int
                    {
                        SupportedTextSelection_None = 0,
                        SupportedTextSelection_Single = 1,
                        SupportedTextSelection_Multiple = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.SynchronizedInputType
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum SynchronizedInputType : int
                    {
                        SynchronizedInputType_KeyUp = 1,
                        SynchronizedInputType_KeyDown = 2,
                        SynchronizedInputType_LeftMouseUp = 4,
                        SynchronizedInputType_LeftMouseDown = 8,
                        SynchronizedInputType_RightMouseUp = 16,
                        SynchronizedInputType_RightMouseDown = 32,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ToggleState
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum ToggleState : int
                    {
                        ToggleState_Off = 0,
                        ToggleState_On = 1,
                        ToggleState_Indeterminate = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.WindowInteractionState
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum WindowInteractionState : int
                    {
                        WindowInteractionState_Running = 0,
                        WindowInteractionState_Closing = 1,
                        WindowInteractionState_ReadyForUserInteraction = 2,
                        WindowInteractionState_BlockedByModalWindow = 3,
                        WindowInteractionState_NotResponding = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.WindowVisualState
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum WindowVisualState : int
                    {
                        WindowVisualState_Normal = 0,
                        WindowVisualState_Maximized = 1,
                        WindowVisualState_Minimized = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ZoomUnit
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
                namespace Automation {
                    /* [v1_enum, contract] */
                    enum ZoomUnit : int
                    {
                        ZoomUnit_NoAmount = 0,
                        ZoomUnit_LargeDecrement = 1,
                        ZoomUnit_SmallDecrement = 2,
                        ZoomUnit_LargeIncrement = 3,
                        ZoomUnit_SmallIncrement = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("D475A0C1-48B2-4E40-A6CF-3DC4B638C0DE"), exclusiveto, contract] */
                    MIDL_INTERFACE("D475A0C1-48B2-4E40-A6CF-3DC4B638C0DE")
                    IAnnotationPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAnnotationPatternIdentifiers=_uuidof(IAnnotationPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("E0E3A35D-D167-46DC-95AB-330AF61AEBB5"), exclusiveto, contract] */
                    MIDL_INTERFACE("E0E3A35D-D167-46DC-95AB-330AF61AEBB5")
                    IAnnotationPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeIdProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationTypeNameProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthorProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateTimeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAnnotationPatternIdentifiersStatics=_uuidof(IAnnotationPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotation[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("FB3C30CA-03D8-4618-91BF-E4D84F4AF318"), exclusiveto, contract] */
                    MIDL_INTERFACE("FB3C30CA-03D8-4618-91BF-E4D84F4AF318")
                    IAutomationAnnotation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::AnnotationType * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                            /* [in] */ABI::Windows::UI::Xaml::Automation::AnnotationType value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Element(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Element(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationAnnotation=_uuidof(IAutomationAnnotation);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotationFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("4906FA52-DDC0-4E69-B76B-019D928D822F"), exclusiveto, contract] */
                    MIDL_INTERFACE("4906FA52-DDC0-4E69-B76B-019D928D822F")
                    IAutomationAnnotationFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::UI::Xaml::Automation::AnnotationType type,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWithElementParameter(
                            /* [in] */ABI::Windows::UI::Xaml::Automation::AnnotationType type,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationAnnotation * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationAnnotationFactory=_uuidof(IAutomationAnnotationFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("E503EAB7-4EE5-48CB-B5B8-BBCD46C9D1DA"), exclusiveto, contract] */
                    MIDL_INTERFACE("E503EAB7-4EE5-48CB-B5B8-BBCD46C9D1DA")
                    IAutomationAnnotationStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationAnnotationStatics=_uuidof(IAutomationAnnotationStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("E68A63CF-4345-4E2D-8A6A-49CCE1FA2DCC"), exclusiveto, contract] */
                    MIDL_INTERFACE("E68A63CF-4345-4E2D-8A6A-49CCE1FA2DCC")
                    IAutomationElementIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiers=_uuidof(IAutomationElementIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("4549399F-8340-4D67-B9BF-8C2AC6A0773A"), exclusiveto, contract] */
                    MIDL_INTERFACE("4549399F-8340-4D67-B9BF-8C2AC6A0773A")
                    IAutomationElementIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceleratorKeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationIdProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRectangleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClassNameProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClickablePointProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasKeyboardFocusProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HelpTextProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentElementProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsControlElementProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabledProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsKeyboardFocusableProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOffscreenProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPasswordProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequiredForFormProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemStatusProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LabeledByProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedControlTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrientationProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LiveSettingProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics=_uuidof(IAutomationElementIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("B5CBB1E2-D55F-46A9-9EDA-1A4742515DC3"), exclusiveto, contract] */
                    MIDL_INTERFACE("B5CBB1E2-D55F-46A9-9EDA-1A4742515DC3")
                    IAutomationElementIdentifiersStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlledPeersProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics2=_uuidof(IAutomationElementIdentifiersStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("0F5CBEBD-B3EB-4083-ADC7-0C2F39BB3543"), exclusiveto, contract] */
                    MIDL_INTERFACE("0F5CBEBD-B3EB-4083-ADC7-0C2F39BB3543")
                    IAutomationElementIdentifiersStatics3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionInSetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeOfSetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LevelProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics3=_uuidof(IAutomationElementIdentifiersStatics3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("5AF51F75-5913-4D78-B330-A6F50B73ED9B"), exclusiveto, contract] */
                    MIDL_INTERFACE("5AF51F75-5913-4D78-B330-A6F50B73ED9B")
                    IAutomationElementIdentifiersStatics4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LandmarkTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedLandmarkTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics4=_uuidof(IAutomationElementIdentifiersStatics4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("986A8206-DE59-42F9-A1E7-62B8AF9E756D"), exclusiveto, contract] */
                    MIDL_INTERFACE("986A8206-DE59-42F9-A1E7-62B8AF9E756D")
                    IAutomationElementIdentifiersStatics5 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPeripheralProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDataValidForFormProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullDescriptionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DescribedByProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsToProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsFromProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics5=_uuidof(IAutomationElementIdentifiersStatics5);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("DE52B00D-8328-4EAE-8035-F8DB99C8BAC4"), exclusiveto, contract] */
                    MIDL_INTERFACE("DE52B00D-8328-4EAE-8035-F8DB99C8BAC4")
                    IAutomationElementIdentifiersStatics6 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CultureProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationElementIdentifiersStatics6=_uuidof(IAutomationElementIdentifiersStatics6);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperties[] = L"Windows.UI.Xaml.Automation.IAutomationProperties";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("68D7232C-E622-48E9-AF0B-1FFA33CC5CBA"), exclusiveto, contract] */
                    MIDL_INTERFACE("68D7232C-E622-48E9-AF0B-1FFA33CC5CBA")
                    IAutomationProperties : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationProperties=_uuidof(IAutomationProperties);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("B618FD7B-32D0-4970-9C42-7C039AC7BE78"), exclusiveto, contract] */
                    MIDL_INTERFACE("B618FD7B-32D0-4970-9C42-7C039AC7BE78")
                    IAutomationPropertiesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceleratorKeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAcceleratorKey(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAcceleratorKey(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAccessKey(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAccessKey(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutomationIdProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAutomationId(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAutomationId(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HelpTextProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHelpText(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetHelpText(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequiredForFormProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsRequiredForForm(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsRequiredForForm(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemStatusProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetItemStatus(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetItemStatus(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetItemType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetItemType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LabeledByProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLabeledBy(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLabeledBy(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NameProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetName(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetName(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LiveSettingProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLiveSetting(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLiveSetting(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::Automation::Peers::AutomationLiveSetting value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics=_uuidof(IAutomationPropertiesStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("3976547F-7089-4801-8F1D-AAB78090D1A0"), exclusiveto, contract] */
                    MIDL_INTERFACE("3976547F-7089-4801-8F1D-AAB78090D1A0")
                    IAutomationPropertiesStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessibilityViewProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAccessibilityView(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::Peers::AccessibilityView * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAccessibilityView(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::Automation::Peers::AccessibilityView value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlledPeersProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetControlledPeers(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CUIElement * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics2=_uuidof(IAutomationPropertiesStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("7B75D735-5CB1-42AD-9B57-5FABA8C1867F"), exclusiveto, contract] */
                    MIDL_INTERFACE("7B75D735-5CB1-42AD-9B57-5FABA8C1867F")
                    IAutomationPropertiesStatics3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionInSetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPositionInSet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPositionInSet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SizeOfSetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSizeOfSet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSizeOfSet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LevelProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLevel(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLevel(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAnnotations(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics3=_uuidof(IAutomationPropertiesStatics3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("F7D62655-311A-4B7C-A131-524E89CD3CF9"), exclusiveto, contract] */
                    MIDL_INTERFACE("F7D62655-311A-4B7C-A131-524E89CD3CF9")
                    IAutomationPropertiesStatics4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LandmarkTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLandmarkType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLandmarkType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::Automation::Peers::AutomationLandmarkType value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedLandmarkTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLocalizedLandmarkType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLocalizedLandmarkType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics4=_uuidof(IAutomationPropertiesStatics4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("0BE35B26-C8F9-41A2-B4DB-E6A7A32B0C34"), exclusiveto, contract] */
                    MIDL_INTERFACE("0BE35B26-C8F9-41A2-B4DB-E6A7A32B0C34")
                    IAutomationPropertiesStatics5 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPeripheralProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsPeripheral(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsPeripheral(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDataValidForFormProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetIsDataValidForForm(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsDataValidForForm(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullDescriptionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFullDescription(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFullDescription(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalizedControlTypeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetLocalizedControlType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetLocalizedControlType(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DescribedByProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDescribedBy(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsToProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFlowsTo(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowsFromProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFlowsFrom(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics5=_uuidof(IAutomationPropertiesStatics5);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("C61E030F-EB49-4E5D-B012-4C1C96C3901B"), exclusiveto, contract] */
                    MIDL_INTERFACE("C61E030F-EB49-4E5D-B012-4C1C96C3901B")
                    IAutomationPropertiesStatics6 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CultureProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCulture(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCulture(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationPropertiesStatics6=_uuidof(IAutomationPropertiesStatics6);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperty[] = L"Windows.UI.Xaml.Automation.IAutomationProperty";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("B627195B-3227-4E16-9534-DDECE30DDB46"), exclusiveto, contract] */
                    MIDL_INTERFACE("B627195B-3227-4E16-9534-DDECE30DDB46")
                    IAutomationProperty : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAutomationProperty=_uuidof(IAutomationProperty);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDockPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("CCD7F4E6-E4F9-47FF-BDE7-378B11F78E09"), exclusiveto, contract] */
                    MIDL_INTERFACE("CCD7F4E6-E4F9-47FF-BDE7-378B11F78E09")
                    IDockPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDockPatternIdentifiers=_uuidof(IDockPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("2B87245C-ED80-4FE5-8EB4-708A39C841E5"), exclusiveto, contract] */
                    MIDL_INTERFACE("2B87245C-ED80-4FE5-8EB4-708A39C841E5")
                    IDockPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DockPositionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDockPatternIdentifiersStatics=_uuidof(IDockPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDragPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("6266E985-4D07-4E80-82EB-8F96690A1A0C"), exclusiveto, contract] */
                    MIDL_INTERFACE("6266E985-4D07-4E80-82EB-8F96690A1A0C")
                    IDragPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDragPatternIdentifiers=_uuidof(IDragPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("2A05379D-1755-4082-9D90-46F1411D7986"), exclusiveto, contract] */
                    MIDL_INTERFACE("2A05379D-1755-4082-9D90-46F1411D7986")
                    IDragPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffectProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropEffectsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GrabbedItemsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrabbedProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDragPatternIdentifiersStatics=_uuidof(IDragPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("11865133-A6FE-4634-BD18-0EF612B7B208"), exclusiveto, contract] */
                    MIDL_INTERFACE("11865133-A6FE-4634-BD18-0EF612B7B208")
                    IDropTargetPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDropTargetPatternIdentifiers=_uuidof(IDropTargetPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("1B693304-89FB-4B0A-9452-CA2C66AAF9F3"), exclusiveto, contract] */
                    MIDL_INTERFACE("1B693304-89FB-4B0A-9452-CA2C66AAF9F3")
                    IDropTargetPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropTargetEffectProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DropTargetEffectsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDropTargetPatternIdentifiersStatics=_uuidof(IDropTargetPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("B006BAC0-751B-4D55-92CB-613EC1BDF5D0"), exclusiveto, contract] */
                    MIDL_INTERFACE("B006BAC0-751B-4D55-92CB-613EC1BDF5D0")
                    IExpandCollapsePatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpandCollapsePatternIdentifiers=_uuidof(IExpandCollapsePatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("D7816FD4-6EE0-4F38-8E14-56EF21ADACFD"), exclusiveto, contract] */
                    MIDL_INTERFACE("D7816FD4-6EE0-4F38-8E14-56EF21ADACFD")
                    IExpandCollapsePatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpandCollapseStateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IExpandCollapsePatternIdentifiersStatics=_uuidof(IExpandCollapsePatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("757744F1-3285-4FB1-803B-2545BD431599"), exclusiveto, contract] */
                    MIDL_INTERFACE("757744F1-3285-4FB1-803B-2545BD431599")
                    IGridItemPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGridItemPatternIdentifiers=_uuidof(IGridItemPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("217D2402-5E46-4D61-8794-B8EE8E774714"), exclusiveto, contract] */
                    MIDL_INTERFACE("217D2402-5E46-4D61-8794-B8EE8E774714")
                    IGridItemPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnSpanProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainingGridProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowSpanProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGridItemPatternIdentifiersStatics=_uuidof(IGridItemPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("C902980F-96C5-450C-9044-7E52C24F9E94"), exclusiveto, contract] */
                    MIDL_INTERFACE("C902980F-96C5-450C-9044-7E52C24F9E94")
                    IGridPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGridPatternIdentifiers=_uuidof(IGridPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("7BC452F3-A181-4137-8DE9-1F9B1A8320ED"), exclusiveto, contract] */
                    MIDL_INTERFACE("7BC452F3-A181-4137-8DE9-1F9B1A8320ED")
                    IGridPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnCountProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowCountProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGridPatternIdentifiersStatics=_uuidof(IGridPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("5D5CD3B8-1E12-488B-B0EA-5E6CB89816E1"), exclusiveto, contract] */
                    MIDL_INTERFACE("5D5CD3B8-1E12-488B-B0EA-5E6CB89816E1")
                    IMultipleViewPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultipleViewPatternIdentifiers=_uuidof(IMultipleViewPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("A9CFA66F-6B84-4D71-9E48-D764D3BCDA8E"), exclusiveto, contract] */
                    MIDL_INTERFACE("A9CFA66F-6B84-4D71-9E48-D764D3BCDA8E")
                    IMultipleViewPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentViewProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedViewsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMultipleViewPatternIdentifiersStatics=_uuidof(IMultipleViewPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("F8760F45-33C9-467D-BC9E-D1515263ACE1"), exclusiveto, contract] */
                    MIDL_INTERFACE("F8760F45-33C9-467D-BC9E-D1515263ACE1")
                    IRangeValuePatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRangeValuePatternIdentifiers=_uuidof(IRangeValuePatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("CE23450F-1C27-457F-B815-7A5E46863DBB"), exclusiveto, contract] */
                    MIDL_INTERFACE("CE23450F-1C27-457F-B815-7A5E46863DBB")
                    IRangeValuePatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnlyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LargeChangeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaximumProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinimumProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmallChangeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRangeValuePatternIdentifiersStatics=_uuidof(IRangeValuePatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IScrollPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("366B1003-425C-4951-AE83-D521E73BC696"), exclusiveto, contract] */
                    MIDL_INTERFACE("366B1003-425C-4951-AE83-D521E73BC696")
                    IScrollPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollPatternIdentifiers=_uuidof(IScrollPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("4BF8E0A1-FB7F-4FA4-83B3-CFAEB103A685"), exclusiveto, contract] */
                    MIDL_INTERFACE("4BF8E0A1-FB7F-4FA4-83B3-CFAEB103A685")
                    IScrollPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontallyScrollableProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalScrollPercentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalViewSizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoScroll(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticallyScrollableProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalScrollPercentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalViewSizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScrollPatternIdentifiersStatics=_uuidof(IScrollPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("2DAFA41A-3EF8-4BB5-A02B-3EE1B2274740"), exclusiveto, contract] */
                    MIDL_INTERFACE("2DAFA41A-3EF8-4BB5-A02B-3EE1B2274740")
                    ISelectionItemPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISelectionItemPatternIdentifiers=_uuidof(ISelectionItemPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("A918D163-487E-4E3E-9F86-7B44ACBE27CE"), exclusiveto, contract] */
                    MIDL_INTERFACE("A918D163-487E-4E3E-9F86-7B44ACBE27CE")
                    ISelectionItemPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectedProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionContainerProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISelectionItemPatternIdentifiersStatics=_uuidof(ISelectionItemPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("4AA66FB0-E3F7-475F-B78D-F8A83BB730C4"), exclusiveto, contract] */
                    MIDL_INTERFACE("4AA66FB0-E3F7-475F-B78D-F8A83BB730C4")
                    ISelectionPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISelectionPatternIdentifiers=_uuidof(ISelectionPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("93035B4C-6B50-40A1-B23F-5C78DDBD479A"), exclusiveto, contract] */
                    MIDL_INTERFACE("93035B4C-6B50-40A1-B23F-5C78DDBD479A")
                    ISelectionPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanSelectMultipleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelectionRequiredProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISelectionPatternIdentifiersStatics=_uuidof(ISelectionPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("84347E19-CA4B-46A2-A794-C87928A3B1AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("84347E19-CA4B-46A2-A794-C87928A3B1AB")
                    ISpreadsheetItemPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpreadsheetItemPatternIdentifiers=_uuidof(ISpreadsheetItemPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("43658779-5380-4F12-B468-B4F368AD4499"), exclusiveto, contract] */
                    MIDL_INTERFACE("43658779-5380-4F12-B468-B4F368AD4499")
                    ISpreadsheetItemPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormulaProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpreadsheetItemPatternIdentifiersStatics=_uuidof(ISpreadsheetItemPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IStylesPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("B0E4E201-E89D-436B-8287-4F7903466879"), exclusiveto, contract] */
                    MIDL_INTERFACE("B0E4E201-E89D-436B-8287-4F7903466879")
                    IStylesPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStylesPatternIdentifiers=_uuidof(IStylesPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("528A457A-BC3C-4D48-94AF-1F68703CA296"), exclusiveto, contract] */
                    MIDL_INTERFACE("528A457A-BC3C-4D48-94AF-1F68703CA296")
                    IStylesPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedPropertiesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillColorProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternColorProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillPatternStyleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShapeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleIdProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleNameProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStylesPatternIdentifiersStatics=_uuidof(IStylesPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("C326E5AD-8077-4C64-98E4-E83BCF1B4389"), exclusiveto, contract] */
                    MIDL_INTERFACE("C326E5AD-8077-4C64-98E4-E83BCF1B4389")
                    ITableItemPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITableItemPatternIdentifiers=_uuidof(ITableItemPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("24C4B923-E9A2-4DE9-B2A4-A8B22D0BE362"), exclusiveto, contract] */
                    MIDL_INTERFACE("24C4B923-E9A2-4DE9-B2A4-A8B22D0BE362")
                    ITableItemPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnHeaderItemsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowHeaderItemsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITableItemPatternIdentifiersStatics=_uuidof(ITableItemPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITablePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("38D104FE-0D0C-412A-BF8D-51EDE683BAF5"), exclusiveto, contract] */
                    MIDL_INTERFACE("38D104FE-0D0C-412A-BF8D-51EDE683BAF5")
                    ITablePatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITablePatternIdentifiers=_uuidof(ITablePatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("75073D25-32C9-4903-AECF-DC3504CBD244"), exclusiveto, contract] */
                    MIDL_INTERFACE("75073D25-32C9-4903-AECF-DC3504CBD244")
                    ITablePatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColumnHeadersProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowHeadersProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RowOrColumnMajorProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITablePatternIdentifiersStatics=_uuidof(ITablePatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITogglePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("7E191F6B-34D4-4AE7-83AC-29F88882D985"), exclusiveto, contract] */
                    MIDL_INTERFACE("7E191F6B-34D4-4AE7-83AC-29F88882D985")
                    ITogglePatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITogglePatternIdentifiers=_uuidof(ITogglePatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("C7F75544-14A5-4F2F-92FC-760524DE06EA"), exclusiveto, contract] */
                    MIDL_INTERFACE("C7F75544-14A5-4F2F-92FC-760524DE06EA")
                    ITogglePatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ToggleStateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITogglePatternIdentifiersStatics=_uuidof(ITogglePatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPattern2Identifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.ITransformPattern2Identifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("08AAA03D-DEA7-402F-8097-9A2783D60E5D"), exclusiveto, contract] */
                    MIDL_INTERFACE("08AAA03D-DEA7-402F-8097-9A2783D60E5D")
                    ITransformPattern2Identifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITransformPattern2Identifiers=_uuidof(ITransformPattern2Identifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("78963644-11F0-467C-A72B-5DAC41C1F6FE"), exclusiveto, contract] */
                    MIDL_INTERFACE("78963644-11F0-467C-A72B-5DAC41C1F6FE")
                    ITransformPattern2IdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanZoomProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZoomLevelProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxZoomProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinZoomProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITransformPattern2IdentifiersStatics=_uuidof(ITransformPattern2IdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("E4115B8C-C3C8-4A37-B994-2709A7811665"), exclusiveto, contract] */
                    MIDL_INTERFACE("E4115B8C-C3C8-4A37-B994-2709A7811665")
                    ITransformPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITransformPatternIdentifiers=_uuidof(ITransformPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("4570EDAB-D705-40C4-A1DC-E9ACFCEF85F6"), exclusiveto, contract] */
                    MIDL_INTERFACE("4570EDAB-D705-40C4-A1DC-E9ACFCEF85F6")
                    ITransformPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMoveProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanResizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanRotateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITransformPatternIdentifiersStatics=_uuidof(ITransformPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("425BF64C-5333-4E41-B470-2BAD14ECD085"), exclusiveto, contract] */
                    MIDL_INTERFACE("425BF64C-5333-4E41-B470-2BAD14ECD085")
                    IValuePatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IValuePatternIdentifiers=_uuidof(IValuePatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("C247E8F7-ADCC-440F-B123-33788A40525A"), exclusiveto, contract] */
                    MIDL_INTERFACE("C247E8F7-ADCC-440F-B123-33788A40525A")
                    IValuePatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnlyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValueProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IValuePatternIdentifiersStatics=_uuidof(IValuePatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IWindowPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiers";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("39F78BB4-7032-41E2-B79E-27B74A8628DE"), exclusiveto, contract] */
                    MIDL_INTERFACE("39F78BB4-7032-41E2-B79E-27B74A8628DE")
                    IWindowPatternIdentifiers : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowPatternIdentifiers=_uuidof(IWindowPatternIdentifiers);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    /* [object, uuid("07D0AD06-6302-4D29-878B-19DA03FC228D"), exclusiveto, contract] */
                    MIDL_INTERFACE("07D0AD06-6302-4D29-878B-19DA03FC228D")
                    IWindowPatternIdentifiersStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMaximizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanMinimizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsModalProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTopmostProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowInteractionStateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WindowVisualStateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Automation::IAutomationProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowPatternIdentifiersStatics=_uuidof(IWindowPatternIdentifiersStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Automation */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Automation.IAutomationAnnotationFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationAnnotationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationAnnotation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationAnnotation_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationAnnotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationAnnotation[] = L"Windows.UI.Xaml.Automation.AutomationAnnotation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationElementIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.AutomationElementIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperties[] = L"Windows.UI.Xaml.Automation.AutomationProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationProperty ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperty_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperty[] = L"Windows.UI.Xaml.Automation.AutomationProperty";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDockPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DockPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDragPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DragPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IGridPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IScrollPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ScrollPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IStylesPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_StylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.StylesPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TableItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITablePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TablePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITogglePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TogglePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITransformPattern2Identifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.TransformPattern2Identifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITransformPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TransformPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ValuePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IWindowPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_WindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.WindowPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;

typedef struct __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CUIElement __FIIterator_1_Windows__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CUIElement;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CUIElement_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CUIElement __FIIterable_1_Windows__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CUIElement;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CUIElement **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CUIElement_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement __FIVectorView_1_Windows__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CUIElement;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CUIElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CUIElement __FIVector_1_Windows__CUI__CXaml__CUIElement;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CUIElement;

typedef struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CUIElement **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CUIElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CUIElement_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CUIElement_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject __FIIterator_1_Windows__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDependencyObject;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDependencyObject_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject __FIIterable_1_Windows__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDependencyObject;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDependencyObject **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDependencyObject_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject __FIVector_1_Windows__CUI__CXaml__CDependencyObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDependencyObject;

typedef struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDependencyObject_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CDependencyObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting;







#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit;
































































































/*
 *
 * Struct Windows.UI.Xaml.Automation.AnnotationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType
{
    AnnotationType_Unknown = 60000,
    AnnotationType_SpellingError = 60001,
    AnnotationType_GrammarError = 60002,
    AnnotationType_Comment = 60003,
    AnnotationType_FormulaError = 60004,
    AnnotationType_TrackChanges = 60005,
    AnnotationType_Header = 60006,
    AnnotationType_Footer = 60007,
    AnnotationType_Highlighted = 60008,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AnnotationType_Endnote = 60009,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    AnnotationType_Footnote = 60010,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_InsertionChange = 60011,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_DeletionChange = 60012,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_MoveChange = 60013,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_FormatChange = 60014,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_UnsyncedChange = 60015,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_EditingLockedChange = 60016,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_ExternalChange = 60017,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_ConflictingChange = 60018,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_Author = 60019,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_AdvancedProofingIssue = 60020,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_DataValidationError = 60021,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AnnotationType_CircularReferenceError = 60022,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationActiveEnd
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd
{
    AutomationActiveEnd_None = 0,
    AutomationActiveEnd_Start = 1,
    AutomationActiveEnd_End = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationAnimationStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle
{
    AutomationAnimationStyle_None = 0,
    AutomationAnimationStyle_LasVegasLights = 1,
    AutomationAnimationStyle_BlinkingBackground = 2,
    AutomationAnimationStyle_SparkleText = 3,
    AutomationAnimationStyle_MarchingBlackAnts = 4,
    AutomationAnimationStyle_MarchingRedAnts = 5,
    AutomationAnimationStyle_Shimmer = 6,
    AutomationAnimationStyle_Other = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationBulletStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle
{
    AutomationBulletStyle_None = 0,
    AutomationBulletStyle_HollowRoundBullet = 1,
    AutomationBulletStyle_FilledRoundBullet = 2,
    AutomationBulletStyle_HollowSquareBullet = 3,
    AutomationBulletStyle_FilledSquareBullet = 4,
    AutomationBulletStyle_DashBullet = 5,
    AutomationBulletStyle_Other = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationCaretBidiMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode
{
    AutomationCaretBidiMode_LTR = 0,
    AutomationCaretBidiMode_RTL = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationCaretPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition
{
    AutomationCaretPosition_Unknown = 0,
    AutomationCaretPosition_EndOfLine = 1,
    AutomationCaretPosition_BeginningOfLine = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationFlowDirections
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections
{
    AutomationFlowDirections_Default = 0,
    AutomationFlowDirections_RightToLeft = 1,
    AutomationFlowDirections_BottomToTop = 2,
    AutomationFlowDirections_Vertical = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationOutlineStyles
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles
{
    AutomationOutlineStyles_None = 0,
    AutomationOutlineStyles_Outline = 1,
    AutomationOutlineStyles_Shadow = 2,
    AutomationOutlineStyles_Engraved = 3,
    AutomationOutlineStyles_Embossed = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationStyleId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId
{
    AutomationStyleId_Heading1 = 70001,
    AutomationStyleId_Heading2 = 70002,
    AutomationStyleId_Heading3 = 70003,
    AutomationStyleId_Heading4 = 70004,
    AutomationStyleId_Heading5 = 70005,
    AutomationStyleId_Heading6 = 70006,
    AutomationStyleId_Heading7 = 70007,
    AutomationStyleId_Heading8 = 70008,
    AutomationStyleId_Heading9 = 70009,
    AutomationStyleId_Title = 70010,
    AutomationStyleId_Subtitle = 70011,
    AutomationStyleId_Normal = 70012,
    AutomationStyleId_Emphasis = 70013,
    AutomationStyleId_Quote = 70014,
    AutomationStyleId_BulletedList = 70015,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationTextDecorationLineStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle
{
    AutomationTextDecorationLineStyle_None = 0,
    AutomationTextDecorationLineStyle_Single = 1,
    AutomationTextDecorationLineStyle_WordsOnly = 2,
    AutomationTextDecorationLineStyle_Double = 3,
    AutomationTextDecorationLineStyle_Dot = 4,
    AutomationTextDecorationLineStyle_Dash = 5,
    AutomationTextDecorationLineStyle_DashDot = 6,
    AutomationTextDecorationLineStyle_DashDotDot = 7,
    AutomationTextDecorationLineStyle_Wavy = 8,
    AutomationTextDecorationLineStyle_ThickSingle = 9,
    AutomationTextDecorationLineStyle_DoubleWavy = 10,
    AutomationTextDecorationLineStyle_ThickWavy = 11,
    AutomationTextDecorationLineStyle_LongDash = 12,
    AutomationTextDecorationLineStyle_ThickDash = 13,
    AutomationTextDecorationLineStyle_ThickDashDot = 14,
    AutomationTextDecorationLineStyle_ThickDashDotDot = 15,
    AutomationTextDecorationLineStyle_ThickDot = 16,
    AutomationTextDecorationLineStyle_ThickLongDash = 17,
    AutomationTextDecorationLineStyle_Other = 18,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.AutomationTextEditChangeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType
{
    AutomationTextEditChangeType_None = 0,
    AutomationTextEditChangeType_AutoCorrect = 1,
    AutomationTextEditChangeType_Composition = 2,
    AutomationTextEditChangeType_CompositionFinalized = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.DockPosition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition
{
    DockPosition_Top = 0,
    DockPosition_Left = 1,
    DockPosition_Bottom = 2,
    DockPosition_Right = 3,
    DockPosition_Fill = 4,
    DockPosition_None = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ExpandCollapseState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState
{
    ExpandCollapseState_Collapsed = 0,
    ExpandCollapseState_Expanded = 1,
    ExpandCollapseState_PartiallyExpanded = 2,
    ExpandCollapseState_LeafNode = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.RowOrColumnMajor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor
{
    RowOrColumnMajor_RowMajor = 0,
    RowOrColumnMajor_ColumnMajor = 1,
    RowOrColumnMajor_Indeterminate = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ScrollAmount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount
{
    ScrollAmount_LargeDecrement = 0,
    ScrollAmount_SmallDecrement = 1,
    ScrollAmount_NoAmount = 2,
    ScrollAmount_LargeIncrement = 3,
    ScrollAmount_SmallIncrement = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.SupportedTextSelection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection
{
    SupportedTextSelection_None = 0,
    SupportedTextSelection_Single = 1,
    SupportedTextSelection_Multiple = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.SynchronizedInputType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType
{
    SynchronizedInputType_KeyUp = 1,
    SynchronizedInputType_KeyDown = 2,
    SynchronizedInputType_LeftMouseUp = 4,
    SynchronizedInputType_LeftMouseDown = 8,
    SynchronizedInputType_RightMouseUp = 16,
    SynchronizedInputType_RightMouseDown = 32,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ToggleState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState
{
    ToggleState_Off = 0,
    ToggleState_On = 1,
    ToggleState_Indeterminate = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.WindowInteractionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState
{
    WindowInteractionState_Running = 0,
    WindowInteractionState_Closing = 1,
    WindowInteractionState_ReadyForUserInteraction = 2,
    WindowInteractionState_BlockedByModalWindow = 3,
    WindowInteractionState_NotResponding = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.WindowVisualState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState
{
    WindowVisualState_Normal = 0,
    WindowVisualState_Maximized = 1,
    WindowVisualState_Minimized = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.ZoomUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit
{
    ZoomUnit_NoAmount = 0,
    ZoomUnit_LargeDecrement = 1,
    ZoomUnit_SmallDecrement = 2,
    ZoomUnit_LargeIncrement = 3,
    ZoomUnit_SmallIncrement = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers";
/* [object, uuid("D475A0C1-48B2-4E40-A6CF-3DC4B638C0DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics";
/* [object, uuid("E0E3A35D-D167-46DC-95AB-330AF61AEBB5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateTimeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AnnotationTypeIdProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeIdProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AnnotationTypeNameProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationTypeNameProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_AuthorProperty(This,value) \
    ( (This)->lpVtbl->get_AuthorProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_DateTimeProperty(This,value) \
    ( (This)->lpVtbl->get_DateTimeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_get_TargetProperty(This,value) \
    ( (This)->lpVtbl->get_TargetProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotation[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotation";
/* [object, uuid("FB3C30CA-03D8-4618-91BF-E4D84F4AF318"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Element )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_get_Element(This,value) \
    ( (This)->lpVtbl->get_Element(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_put_Element(This,value) \
    ( (This)->lpVtbl->put_Element(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotationFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationFactory";
/* [object, uuid("4906FA52-DDC0-4E69-B76B-019D928D822F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithElementParameter )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType type,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_CreateInstance(This,type,instance) \
    ( (This)->lpVtbl->CreateInstance(This,type,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_CreateWithElementParameter(This,type,element,instance) \
    ( (This)->lpVtbl->CreateWithElementParameter(This,type,element,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationAnnotationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationStatics";
/* [object, uuid("E503EAB7-4EE5-48CB-B5B8-BBCD46C9D1DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_get_TypeProperty(This,value) \
    ( (This)->lpVtbl->get_TypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_get_ElementProperty(This,value) \
    ( (This)->lpVtbl->get_ElementProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiers";
/* [object, uuid("E68A63CF-4345-4E2D-8A6A-49CCE1FA2DCC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics";
/* [object, uuid("4549399F-8340-4D67-B9BF-8C2AC6A0773A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRectangleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClassNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClickablePointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasKeyboardFocusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsControlElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsKeyboardFocusableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOffscreenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrientationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AcceleratorKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AccessKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_AutomationIdProperty(This,value) \
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_BoundingRectangleProperty(This,value) \
    ( (This)->lpVtbl->get_BoundingRectangleProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ClassNameProperty(This,value) \
    ( (This)->lpVtbl->get_ClassNameProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ClickablePointProperty(This,value) \
    ( (This)->lpVtbl->get_ClickablePointProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ControlTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_HasKeyboardFocusProperty(This,value) \
    ( (This)->lpVtbl->get_HasKeyboardFocusProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_HelpTextProperty(This,value) \
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsContentElementProperty(This,value) \
    ( (This)->lpVtbl->get_IsContentElementProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsControlElementProperty(This,value) \
    ( (This)->lpVtbl->get_IsControlElementProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsEnabledProperty(This,value) \
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsKeyboardFocusableProperty(This,value) \
    ( (This)->lpVtbl->get_IsKeyboardFocusableProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsOffscreenProperty(This,value) \
    ( (This)->lpVtbl->get_IsOffscreenProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsPasswordProperty(This,value) \
    ( (This)->lpVtbl->get_IsPasswordProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_IsRequiredForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ItemStatusProperty(This,value) \
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_ItemTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LabeledByProperty(This,value) \
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LocalizedControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_NameProperty(This,value) \
    ( (This)->lpVtbl->get_NameProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_OrientationProperty(This,value) \
    ( (This)->lpVtbl->get_OrientationProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_get_LiveSettingProperty(This,value) \
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2";
/* [object, uuid("B5CBB1E2-D55F-46A9-9EDA-1A4742515DC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_get_ControlledPeersProperty(This,value) \
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3";
/* [object, uuid("0F5CBEBD-B3EB-4083-ADC7-0C2F39BB3543"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_get_PositionInSetProperty(This,value) \
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_get_SizeOfSetProperty(This,value) \
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_get_LevelProperty(This,value) \
    ( (This)->lpVtbl->get_LevelProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_get_AnnotationsProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4";
/* [object, uuid("5AF51F75-5913-4D78-B330-A6F50B73ED9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_get_LandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_get_LocalizedLandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5";
/* [object, uuid("986A8206-DE59-42F9-A1E7-62B8AF9E756D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_IsPeripheralProperty(This,value) \
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_IsDataValidForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_FullDescriptionProperty(This,value) \
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_DescribedByProperty(This,value) \
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_FlowsToProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_get_FlowsFromProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6";
/* [object, uuid("DE52B00D-8328-4EAE-8035-F8DB99C8BAC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_get_CultureProperty(This,value) \
    ( (This)->lpVtbl->get_CultureProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperties[] = L"Windows.UI.Xaml.Automation.IAutomationProperties";
/* [object, uuid("68D7232C-E622-48E9-AF0B-1FFA33CC5CBA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics";
/* [object, uuid("B618FD7B-32D0-4970-9C42-7C039AC7BE78"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAcceleratorKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAcceleratorKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAutomationId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutomationId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHelpText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHelpText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsRequiredForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsRequiredForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemStatus )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemStatus )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLabeledBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLabeledBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLiveSetting )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLiveSetting )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AcceleratorKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAcceleratorKey(This,element,value) \
    ( (This)->lpVtbl->GetAcceleratorKey(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAcceleratorKey(This,element,value) \
    ( (This)->lpVtbl->SetAcceleratorKey(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AccessKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAccessKey(This,element,value) \
    ( (This)->lpVtbl->GetAccessKey(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAccessKey(This,element,value) \
    ( (This)->lpVtbl->SetAccessKey(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_AutomationIdProperty(This,value) \
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetAutomationId(This,element,value) \
    ( (This)->lpVtbl->GetAutomationId(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetAutomationId(This,element,value) \
    ( (This)->lpVtbl->SetAutomationId(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_HelpTextProperty(This,value) \
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetHelpText(This,element,value) \
    ( (This)->lpVtbl->GetHelpText(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetHelpText(This,element,value) \
    ( (This)->lpVtbl->SetHelpText(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_IsRequiredForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetIsRequiredForForm(This,element,value) \
    ( (This)->lpVtbl->GetIsRequiredForForm(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetIsRequiredForForm(This,element,value) \
    ( (This)->lpVtbl->SetIsRequiredForForm(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_ItemStatusProperty(This,value) \
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetItemStatus(This,element,value) \
    ( (This)->lpVtbl->GetItemStatus(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetItemStatus(This,element,value) \
    ( (This)->lpVtbl->SetItemStatus(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_ItemTypeProperty(This,value) \
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetItemType(This,element,value) \
    ( (This)->lpVtbl->GetItemType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetItemType(This,element,value) \
    ( (This)->lpVtbl->SetItemType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LabeledByProperty(This,value) \
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLabeledBy(This,element,value) \
    ( (This)->lpVtbl->GetLabeledBy(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLabeledBy(This,element,value) \
    ( (This)->lpVtbl->SetLabeledBy(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_NameProperty(This,value) \
    ( (This)->lpVtbl->get_NameProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetName(This,element,value) \
    ( (This)->lpVtbl->GetName(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetName(This,element,value) \
    ( (This)->lpVtbl->SetName(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_get_LiveSettingProperty(This,value) \
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_GetLiveSetting(This,element,value) \
    ( (This)->lpVtbl->GetLiveSetting(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_SetLiveSetting(This,element,value) \
    ( (This)->lpVtbl->SetLiveSetting(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2";
/* [object, uuid("3976547F-7089-4801-8F1D-AAB78090D1A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessibilityViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessibilityView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessibilityView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetControlledPeers )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CUIElement * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_get_AccessibilityViewProperty(This,value) \
    ( (This)->lpVtbl->get_AccessibilityViewProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_GetAccessibilityView(This,element,value) \
    ( (This)->lpVtbl->GetAccessibilityView(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_SetAccessibilityView(This,element,value) \
    ( (This)->lpVtbl->SetAccessibilityView(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_get_ControlledPeersProperty(This,value) \
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_GetControlledPeers(This,element,value) \
    ( (This)->lpVtbl->GetControlledPeers(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3";
/* [object, uuid("7B75D735-5CB1-42AD-9B57-5FABA8C1867F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionInSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPositionInSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSizeOfSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSizeOfSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotations )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_get_PositionInSetProperty(This,value) \
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetPositionInSet(This,element,value) \
    ( (This)->lpVtbl->GetPositionInSet(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_SetPositionInSet(This,element,value) \
    ( (This)->lpVtbl->SetPositionInSet(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_get_SizeOfSetProperty(This,value) \
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetSizeOfSet(This,element,value) \
    ( (This)->lpVtbl->GetSizeOfSet(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_SetSizeOfSet(This,element,value) \
    ( (This)->lpVtbl->SetSizeOfSet(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_get_LevelProperty(This,value) \
    ( (This)->lpVtbl->get_LevelProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetLevel(This,element,value) \
    ( (This)->lpVtbl->GetLevel(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_SetLevel(This,element,value) \
    ( (This)->lpVtbl->SetLevel(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_get_AnnotationsProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_GetAnnotations(This,element,value) \
    ( (This)->lpVtbl->GetAnnotations(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4";
/* [object, uuid("F7D62655-311A-4B7C-A131-524E89CD3CF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_get_LandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_GetLandmarkType(This,element,value) \
    ( (This)->lpVtbl->GetLandmarkType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_SetLandmarkType(This,element,value) \
    ( (This)->lpVtbl->SetLandmarkType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_get_LocalizedLandmarkTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_GetLocalizedLandmarkType(This,element,value) \
    ( (This)->lpVtbl->GetLocalizedLandmarkType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_SetLocalizedLandmarkType(This,element,value) \
    ( (This)->lpVtbl->SetLocalizedLandmarkType(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5";
/* [object, uuid("0BE35B26-C8F9-41A2-B4DB-E6A7A32B0C34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsPeripheral )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsPeripheral )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsDataValidForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsDataValidForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFullDescription )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFullDescription )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedControlType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedControlType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDescribedBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsTo )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsFrom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_IsPeripheralProperty(This,value) \
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetIsPeripheral(This,element,value) \
    ( (This)->lpVtbl->GetIsPeripheral(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_SetIsPeripheral(This,element,value) \
    ( (This)->lpVtbl->SetIsPeripheral(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_IsDataValidForFormProperty(This,value) \
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetIsDataValidForForm(This,element,value) \
    ( (This)->lpVtbl->GetIsDataValidForForm(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_SetIsDataValidForForm(This,element,value) \
    ( (This)->lpVtbl->SetIsDataValidForForm(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_FullDescriptionProperty(This,value) \
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetFullDescription(This,element,value) \
    ( (This)->lpVtbl->GetFullDescription(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_SetFullDescription(This,element,value) \
    ( (This)->lpVtbl->SetFullDescription(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_LocalizedControlTypeProperty(This,value) \
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetLocalizedControlType(This,element,value) \
    ( (This)->lpVtbl->GetLocalizedControlType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_SetLocalizedControlType(This,element,value) \
    ( (This)->lpVtbl->SetLocalizedControlType(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_DescribedByProperty(This,value) \
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetDescribedBy(This,element,value) \
    ( (This)->lpVtbl->GetDescribedBy(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_FlowsToProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetFlowsTo(This,element,value) \
    ( (This)->lpVtbl->GetFlowsTo(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_get_FlowsFromProperty(This,value) \
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_GetFlowsFrom(This,element,value) \
    ( (This)->lpVtbl->GetFlowsFrom(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6";
/* [object, uuid("C61E030F-EB49-4E5D-B012-4C1C96C3901B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCulture )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCulture )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_get_CultureProperty(This,value) \
    ( (This)->lpVtbl->get_CultureProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_GetCulture(This,element,value) \
    ( (This)->lpVtbl->GetCulture(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_SetCulture(This,element,value) \
    ( (This)->lpVtbl->SetCulture(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IAutomationProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.AutomationProperty
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperty[] = L"Windows.UI.Xaml.Automation.IAutomationProperty";
/* [object, uuid("B627195B-3227-4E16-9534-DDECE30DDB46"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDockPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiers";
/* [object, uuid("CCD7F4E6-E4F9-47FF-BDE7-378B11F78E09"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics";
/* [object, uuid("2B87245C-ED80-4FE5-8EB4-708A39C841E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DockPositionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_get_DockPositionProperty(This,value) \
    ( (This)->lpVtbl->get_DockPositionProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDragPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiers";
/* [object, uuid("6266E985-4D07-4E80-82EB-8F96690A1A0C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics";
/* [object, uuid("2A05379D-1755-4082-9D90-46F1411D7986"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffectProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropEffectsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GrabbedItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrabbedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_DropEffectProperty(This,value) \
    ( (This)->lpVtbl->get_DropEffectProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_DropEffectsProperty(This,value) \
    ( (This)->lpVtbl->get_DropEffectsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_GrabbedItemsProperty(This,value) \
    ( (This)->lpVtbl->get_GrabbedItemsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_get_IsGrabbedProperty(This,value) \
    ( (This)->lpVtbl->get_IsGrabbedProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers";
/* [object, uuid("11865133-A6FE-4634-BD18-0EF612B7B208"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics";
/* [object, uuid("1B693304-89FB-4B0A-9452-CA2C66AAF9F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_get_DropTargetEffectProperty(This,value) \
    ( (This)->lpVtbl->get_DropTargetEffectProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_get_DropTargetEffectsProperty(This,value) \
    ( (This)->lpVtbl->get_DropTargetEffectsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers";
/* [object, uuid("B006BAC0-751B-4D55-92CB-613EC1BDF5D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics";
/* [object, uuid("D7816FD4-6EE0-4F38-8E14-56EF21ADACFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_get_ExpandCollapseStateProperty(This,value) \
    ( (This)->lpVtbl->get_ExpandCollapseStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers";
/* [object, uuid("757744F1-3285-4FB1-803B-2545BD431599"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics";
/* [object, uuid("217D2402-5E46-4D61-8794-B8EE8E774714"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnSpanProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainingGridProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowSpanProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ColumnProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ColumnSpanProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnSpanProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_ContainingGridProperty(This,value) \
    ( (This)->lpVtbl->get_ContainingGridProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_RowProperty(This,value) \
    ( (This)->lpVtbl->get_RowProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_get_RowSpanProperty(This,value) \
    ( (This)->lpVtbl->get_RowSpanProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiers";
/* [object, uuid("C902980F-96C5-450C-9044-7E52C24F9E94"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics";
/* [object, uuid("7BC452F3-A181-4137-8DE9-1F9B1A8320ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnCountProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowCountProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_get_ColumnCountProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnCountProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_get_RowCountProperty(This,value) \
    ( (This)->lpVtbl->get_RowCountProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers";
/* [object, uuid("5D5CD3B8-1E12-488B-B0EA-5E6CB89816E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics";
/* [object, uuid("A9CFA66F-6B84-4D71-9E48-D764D3BCDA8E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedViewsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_get_CurrentViewProperty(This,value) \
    ( (This)->lpVtbl->get_CurrentViewProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_get_SupportedViewsProperty(This,value) \
    ( (This)->lpVtbl->get_SupportedViewsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers";
/* [object, uuid("F8760F45-33C9-467D-BC9E-D1515263ACE1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics";
/* [object, uuid("CE23450F-1C27-457F-B815-7A5E46863DBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LargeChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaximumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinimumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmallChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_IsReadOnlyProperty(This,value) \
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_LargeChangeProperty(This,value) \
    ( (This)->lpVtbl->get_LargeChangeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_MaximumProperty(This,value) \
    ( (This)->lpVtbl->get_MaximumProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_MinimumProperty(This,value) \
    ( (This)->lpVtbl->get_MinimumProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_SmallChangeProperty(This,value) \
    ( (This)->lpVtbl->get_SmallChangeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_get_ValueProperty(This,value) \
    ( (This)->lpVtbl->get_ValueProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IScrollPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiers";
/* [object, uuid("366B1003-425C-4951-AE83-D521E73BC696"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics";
/* [object, uuid("4BF8E0A1-FB7F-4FA4-83B3-CFAEB103A685"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoScroll )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontallyScrollableProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontallyScrollableProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontalScrollPercentProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontalScrollPercentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_HorizontalViewSizeProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontalViewSizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_NoScroll(This,value) \
    ( (This)->lpVtbl->get_NoScroll(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticallyScrollableProperty(This,value) \
    ( (This)->lpVtbl->get_VerticallyScrollableProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticalScrollPercentProperty(This,value) \
    ( (This)->lpVtbl->get_VerticalScrollPercentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_get_VerticalViewSizeProperty(This,value) \
    ( (This)->lpVtbl->get_VerticalViewSizeProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers";
/* [object, uuid("2DAFA41A-3EF8-4BB5-A02B-3EE1B2274740"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics";
/* [object, uuid("A918D163-487E-4E3E-9F86-7B44ACBE27CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionContainerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_get_IsSelectedProperty(This,value) \
    ( (This)->lpVtbl->get_IsSelectedProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_get_SelectionContainerProperty(This,value) \
    ( (This)->lpVtbl->get_SelectionContainerProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers";
/* [object, uuid("4AA66FB0-E3F7-475F-B78D-F8A83BB730C4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics";
/* [object, uuid("93035B4C-6B50-40A1-B23F-5C78DDBD479A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultipleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequiredProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_CanSelectMultipleProperty(This,value) \
    ( (This)->lpVtbl->get_CanSelectMultipleProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_IsSelectionRequiredProperty(This,value) \
    ( (This)->lpVtbl->get_IsSelectionRequiredProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_get_SelectionProperty(This,value) \
    ( (This)->lpVtbl->get_SelectionProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers";
/* [object, uuid("84347E19-CA4B-46A2-A794-C87928A3B1AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics";
/* [object, uuid("43658779-5380-4F12-B468-B4F368AD4499"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormulaProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_get_FormulaProperty(This,value) \
    ( (This)->lpVtbl->get_FormulaProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IStylesPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiers";
/* [object, uuid("B0E4E201-E89D-436B-8287-4F7903466879"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics";
/* [object, uuid("528A457A-BC3C-4D48-94AF-1F68703CA296"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedPropertiesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShapeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_ExtendedPropertiesProperty(This,value) \
    ( (This)->lpVtbl->get_ExtendedPropertiesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillColorProperty(This,value) \
    ( (This)->lpVtbl->get_FillColorProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillPatternColorProperty(This,value) \
    ( (This)->lpVtbl->get_FillPatternColorProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_FillPatternStyleProperty(This,value) \
    ( (This)->lpVtbl->get_FillPatternStyleProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_ShapeProperty(This,value) \
    ( (This)->lpVtbl->get_ShapeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_StyleIdProperty(This,value) \
    ( (This)->lpVtbl->get_StyleIdProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_get_StyleNameProperty(This,value) \
    ( (This)->lpVtbl->get_StyleNameProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers";
/* [object, uuid("C326E5AD-8077-4C64-98E4-E83BCF1B4389"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics";
/* [object, uuid("24C4B923-E9A2-4DE9-B2A4-A8B22D0BE362"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnHeaderItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowHeaderItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_get_ColumnHeaderItemsProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnHeaderItemsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_get_RowHeaderItemsProperty(This,value) \
    ( (This)->lpVtbl->get_RowHeaderItemsProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITablePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiers";
/* [object, uuid("38D104FE-0D0C-412A-BF8D-51EDE683BAF5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics";
/* [object, uuid("75073D25-32C9-4903-AECF-DC3504CBD244"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColumnHeadersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowHeadersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_ColumnHeadersProperty(This,value) \
    ( (This)->lpVtbl->get_ColumnHeadersProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_RowHeadersProperty(This,value) \
    ( (This)->lpVtbl->get_RowHeadersProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_get_RowOrColumnMajorProperty(This,value) \
    ( (This)->lpVtbl->get_RowOrColumnMajorProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITogglePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiers";
/* [object, uuid("7E191F6B-34D4-4AE7-83AC-29F88882D985"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics";
/* [object, uuid("C7F75544-14A5-4F2F-92FC-760524DE06EA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ToggleStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_get_ToggleStateProperty(This,value) \
    ( (This)->lpVtbl->get_ToggleStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPattern2Identifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.ITransformPattern2Identifiers";
/* [object, uuid("08AAA03D-DEA7-402F-8097-9A2783D60E5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics";
/* [object, uuid("78963644-11F0-467C-A72B-5DAC41C1F6FE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_CanZoomProperty(This,value) \
    ( (This)->lpVtbl->get_CanZoomProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_ZoomLevelProperty(This,value) \
    ( (This)->lpVtbl->get_ZoomLevelProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_MaxZoomProperty(This,value) \
    ( (This)->lpVtbl->get_MaxZoomProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_get_MinZoomProperty(This,value) \
    ( (This)->lpVtbl->get_MinZoomProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiers";
/* [object, uuid("E4115B8C-C3C8-4A37-B994-2709A7811665"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics";
/* [object, uuid("4570EDAB-D705-40C4-A1DC-E9ACFCEF85F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMoveProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanResizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanRotateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanMoveProperty(This,value) \
    ( (This)->lpVtbl->get_CanMoveProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanResizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanResizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_get_CanRotateProperty(This,value) \
    ( (This)->lpVtbl->get_CanRotateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiers";
/* [object, uuid("425BF64C-5333-4E41-B470-2BAD14ECD085"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics";
/* [object, uuid("C247E8F7-ADCC-440F-B123-33788A40525A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_get_IsReadOnlyProperty(This,value) \
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_get_ValueProperty(This,value) \
    ( (This)->lpVtbl->get_ValueProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IWindowPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiers";
/* [object, uuid("39F78BB4-7032-41E2-B79E-27B74A8628DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics";
/* [object, uuid("07D0AD06-6302-4D29-878B-19DA03FC228D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMaximizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanMinimizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsModalProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTopmostProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowInteractionStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WindowVisualStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_CanMaximizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanMaximizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_CanMinimizeProperty(This,value) \
    ( (This)->lpVtbl->get_CanMinimizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_IsModalProperty(This,value) \
    ( (This)->lpVtbl->get_IsModalProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_IsTopmostProperty(This,value) \
    ( (This)->lpVtbl->get_IsTopmostProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_WindowInteractionStateProperty(This,value) \
    ( (This)->lpVtbl->get_WindowInteractionStateProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_get_WindowVisualStateProperty(This,value) \
    ( (This)->lpVtbl->get_WindowVisualStateProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationAnnotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Automation.IAutomationAnnotationFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationAnnotationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationAnnotation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationAnnotation_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationAnnotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationAnnotation[] = L"Windows.UI.Xaml.Automation.AutomationAnnotation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationElementIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationElementIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationElementIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.AutomationElementIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IAutomationPropertiesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperties[] = L"Windows.UI.Xaml.Automation.AutomationProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.AutomationProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IAutomationProperty ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperty_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_AutomationProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperty[] = L"Windows.UI.Xaml.Automation.AutomationProperty";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DockPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDockPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DockPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DockPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DragPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDragPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DragPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DragPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.GridItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.GridPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IGridPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_GridPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ScrollPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IScrollPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ScrollPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SelectionPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.StylesPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IStylesPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_StylesPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_StylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.StylesPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TableItemPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TableItemPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TablePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITablePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TablePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TablePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TogglePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITogglePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TogglePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TogglePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TransformPattern2Identifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITransformPattern2Identifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPattern2Identifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.TransformPattern2Identifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.TransformPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.ITransformPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_TransformPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TransformPatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.ValuePatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IValuePatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_ValuePatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ValuePatternIdentifiers";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Automation.WindowPatternIdentifiers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Automation.IWindowPatternIdentifiers ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Automation_WindowPatternIdentifiers_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_WindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.WindowPatternIdentifiers";
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
#endif // __windows2Eui2Examl2Eautomation_p_h__

#endif // __windows2Eui2Examl2Eautomation_h__
