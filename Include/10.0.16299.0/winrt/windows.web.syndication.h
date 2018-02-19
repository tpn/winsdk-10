/* Header file automatically generated from windows.web.syndication.idl */
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
#ifndef __windows2Eweb2Esyndication_h__
#define __windows2Eweb2Esyndication_h__
#ifndef __windows2Eweb2Esyndication_p_h__
#define __windows2Eweb2Esyndication_p_h__


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
#include "Windows.Data.Xml.Dom.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.AtomPub.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationAttribute;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute ABI::Windows::Web::Syndication::ISyndicationAttribute

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationAttributeFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory ABI::Windows::Web::Syndication::ISyndicationAttributeFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationCategory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory ABI::Windows::Web::Syndication::ISyndicationCategory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationCategoryFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory ABI::Windows::Web::Syndication::ISyndicationCategoryFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationClient;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient ABI::Windows::Web::Syndication::ISyndicationClient

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationClientFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory ABI::Windows::Web::Syndication::ISyndicationClientFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationContent;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent ABI::Windows::Web::Syndication::ISyndicationContent

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationContentFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory ABI::Windows::Web::Syndication::ISyndicationContentFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationErrorStatics;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics ABI::Windows::Web::Syndication::ISyndicationErrorStatics

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationFeed;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed ABI::Windows::Web::Syndication::ISyndicationFeed

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationFeedFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory ABI::Windows::Web::Syndication::ISyndicationFeedFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationGenerator;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator ABI::Windows::Web::Syndication::ISyndicationGenerator

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationGeneratorFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory ABI::Windows::Web::Syndication::ISyndicationGeneratorFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationItem;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem ABI::Windows::Web::Syndication::ISyndicationItem

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationItemFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory ABI::Windows::Web::Syndication::ISyndicationItemFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationLink;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink ABI::Windows::Web::Syndication::ISyndicationLink

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationLinkFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory ABI::Windows::Web::Syndication::ISyndicationLinkFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationNode;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode ABI::Windows::Web::Syndication::ISyndicationNode

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationNodeFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory ABI::Windows::Web::Syndication::ISyndicationNodeFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationPerson;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson ABI::Windows::Web::Syndication::ISyndicationPerson

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationPersonFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory ABI::Windows::Web::Syndication::ISyndicationPersonFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationText;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText ABI::Windows::Web::Syndication::ISyndicationText

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                interface ISyndicationTextFactory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory ABI::Windows::Web::Syndication::ISyndicationTextFactory

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2dc8d9d6-0f44-5692-933e-f8902ab7fb94"))
IIterator<ABI::Windows::Web::Syndication::ISyndicationNode*> : IIterator_impl<ABI::Windows::Web::Syndication::ISyndicationNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.ISyndicationNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::ISyndicationNode*> __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationNode*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b486569a-72b3-57aa-9950-cea0b3e4fc58"))
IIterable<ABI::Windows::Web::Syndication::ISyndicationNode*> : IIterable_impl<ABI::Windows::Web::Syndication::ISyndicationNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.ISyndicationNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::ISyndicationNode*> __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationNode*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationAttribute;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a76fcde8-f86f-5b75-aa7d-5787467a319d"))
IIterator<ABI::Windows::Web::Syndication::SyndicationAttribute*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationAttribute*, ABI::Windows::Web::Syndication::ISyndicationAttribute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationAttribute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationAttribute*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("329eabe1-efcc-539e-96ba-f6a44f221dbd"))
IIterable<ABI::Windows::Web::Syndication::SyndicationAttribute*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationAttribute*, ABI::Windows::Web::Syndication::ISyndicationAttribute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationAttribute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationAttribute*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationCategory;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2a9228fa-b088-5690-bb38-b7044e0b502b"))
IIterator<ABI::Windows::Web::Syndication::SyndicationCategory*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d151f7d1-eabd-5300-b55c-149eb289cc71"))
IIterable<ABI::Windows::Web::Syndication::SyndicationCategory*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationItem;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d5692aa3-d785-5db4-ac5c-b3832082e629"))
IIterator<ABI::Windows::Web::Syndication::SyndicationItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationItem*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationItem*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("55463eef-ecb8-59cd-8d6b-74daacbe7d19"))
IIterable<ABI::Windows::Web::Syndication::SyndicationItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationItem*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationItem*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationLink;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("901642b7-6ca4-5b57-b8f1-73208342ba4a"))
IIterator<ABI::Windows::Web::Syndication::SyndicationLink*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationLink*, ABI::Windows::Web::Syndication::ISyndicationLink*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationLink>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationLink*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationLink*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationLink*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c6919f6a-66d9-556a-9632-87d39af14638"))
IIterable<ABI::Windows::Web::Syndication::SyndicationLink*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationLink*, ABI::Windows::Web::Syndication::ISyndicationLink*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationLink>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationLink*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationLink*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationLink*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationPerson;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#define DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1745e807-f209-5da6-8855-7f99e25eb1fc"))
IIterator<ABI::Windows::Web::Syndication::SyndicationPerson*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationPerson*, ABI::Windows::Web::Syndication::ISyndicationPerson*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.Syndication.SyndicationPerson>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Web::Syndication::SyndicationPerson*> __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_t;
#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationPerson*>
//#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::Syndication::ISyndicationPerson*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#define DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e58e7844-eb34-5284-b09e-de6762d548ca"))
IIterable<ABI::Windows::Web::Syndication::SyndicationPerson*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationPerson*, ABI::Windows::Web::Syndication::ISyndicationPerson*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.Syndication.SyndicationPerson>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Web::Syndication::SyndicationPerson*> __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_t;
#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationPerson*>
//#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::Syndication::ISyndicationPerson*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6b4bd4a1-b4f6-5433-afd7-bd2e501a1041"))
IVectorView<ABI::Windows::Web::Syndication::ISyndicationNode*> : IVectorView_impl<ABI::Windows::Web::Syndication::ISyndicationNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.ISyndicationNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::ISyndicationNode*> __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationNode*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c1d6d1cc-69ce-5486-9f35-c87e13111387"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationAttribute*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationAttribute*, ABI::Windows::Web::Syndication::ISyndicationAttribute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationAttribute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationAttribute*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a1ac007c-9d94-552e-840e-139f109a9b88"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationCategory*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9496279b-567e-5652-b942-f6fb70c34173"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationItem*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationItem*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb8b7ff6-fa64-576a-8be4-a055f7a04a73"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationLink*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationLink*, ABI::Windows::Web::Syndication::ISyndicationLink*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationLink>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationLink*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationLink*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationLink*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#define DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0e450d3d-e750-5787-885b-488abc72b5b9"))
IVectorView<ABI::Windows::Web::Syndication::SyndicationPerson*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationPerson*, ABI::Windows::Web::Syndication::ISyndicationPerson*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.Syndication.SyndicationPerson>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Web::Syndication::SyndicationPerson*> __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_t;
#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationPerson*>
//#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::Syndication::ISyndicationPerson*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4508afa-9f02-5eb8-a389-14bbe5193ac0"))
IVector<ABI::Windows::Web::Syndication::ISyndicationNode*> : IVector_impl<ABI::Windows::Web::Syndication::ISyndicationNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.ISyndicationNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::ISyndicationNode*> __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationNode*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2fe84e7b-2350-5941-94b5-a64677b585d1"))
IVector<ABI::Windows::Web::Syndication::SyndicationAttribute*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationAttribute*, ABI::Windows::Web::Syndication::ISyndicationAttribute*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.SyndicationAttribute>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::SyndicationAttribute*> __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationAttribute*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("72e456e4-0e52-52cb-b363-f3581327f033"))
IVector<ABI::Windows::Web::Syndication::SyndicationCategory*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationCategory*, ABI::Windows::Web::Syndication::ISyndicationCategory*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.SyndicationCategory>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::SyndicationCategory*> __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationCategory*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationCategory*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("aa01130b-4631-5117-8c48-dc21b0295096"))
IVector<ABI::Windows::Web::Syndication::SyndicationItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.SyndicationItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::SyndicationItem*> __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationItem*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b8fb25a5-01c3-5207-814e-892b2b5343f7"))
IVector<ABI::Windows::Web::Syndication::SyndicationLink*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationLink*, ABI::Windows::Web::Syndication::ISyndicationLink*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.SyndicationLink>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::SyndicationLink*> __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationLink*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationLink*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#define DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ab772cd6-8ce7-5db9-83ac-0db9e44a1b0c"))
IVector<ABI::Windows::Web::Syndication::SyndicationPerson*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationPerson*, ABI::Windows::Web::Syndication::ISyndicationPerson*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.Syndication.SyndicationPerson>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Web::Syndication::SyndicationPerson*> __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_t;
#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationPerson*>
//#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::Syndication::ISyndicationPerson*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                struct TransferProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


#ifndef DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1610085-94d0-5706-9ac6-10179d7deb92"))
IAsyncActionProgressHandler<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionProgressHandler_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionProgressHandler`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionProgressHandler<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionProgressHandler<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionProgressHandler<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE */





#ifndef DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1c031c8-90bf-5cae-adf6-155b4aedfb60"))
IAsyncActionWithProgressCompletedHandler<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionWithProgressCompletedHandler_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgressCompletedHandler<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_USE */





#ifndef DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b7eb83f5-a746-50f2-b91f-31803161ccc7"))
IAsyncActionWithProgress<struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncActionWithProgress_impl<struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncActionWithProgress`1<Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgress<struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncActionWithProgress<ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncActionWithProgress<ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_USE */



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                struct RetrievalProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6136b327-4152-54e3-aa34-38a0c121dc4d"))
IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("76772ec1-c26f-5f6e-8d3b-8314107cefeb"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f71cff65-e737-5345-b38f-fd445d2dc7e2"))
IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IInputStream, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IInputStream*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                class ServiceDocument;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace AtomPub {
                interface IServiceDocument;
            } /* Windows */
        } /* Web */
    } /* AtomPub */} /* ABI */
#define __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument ABI::Windows::Web::AtomPub::IServiceDocument

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd2a6d54-55aa-5d09-b790-9520d4eb4f19"))
IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5f03b1d3-470d-5be7-8176-1c9a46010900"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("da07abf4-91fa-5c96-84cb-459ea97b934d"))
IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::AtomPub::ServiceDocument*, ABI::Windows::Web::AtomPub::IServiceDocument*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.AtomPub.ServiceDocument, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::ServiceDocument*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::AtomPub::IServiceDocument*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationFeed;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1017bbe0-9d10-543e-8f03-885122a082f3"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationFeed*, ABI::Windows::Web::Syndication::ISyndicationFeed*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Syndication.SyndicationFeed, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0e3d7f70-4e8c-5260-a7e5-786e05bded99"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationFeed*, ABI::Windows::Web::Syndication::ISyndicationFeed*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Syndication.SyndicationFeed, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92eaf151-415e-5f87-8095-781623c88998"))
IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationFeed*, ABI::Windows::Web::Syndication::ISyndicationFeed*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Syndication.SyndicationFeed, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationFeed*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationFeed*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b670d335-e83b-58b1-ad7b-840396085c65"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9de7422b-4bc3-5546-87b8-2eebfd60be48"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44fa5a15-1204-521c-85e5-01259301d527"))
IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::RetrievalProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.RetrievalProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::RetrievalProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::RetrievalProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1ffb57b2-d2de-5559-8de2-50109c63539b"))
IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a796ea9-ff95-50ef-93ea-711bf7946473"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e57d0717-27c0-561e-b4b3-72aa2b1e3fc9"))
IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Web::Syndication::SyndicationItem*, ABI::Windows::Web::Syndication::ISyndicationItem*>,struct ABI::Windows::Web::Syndication::TransferProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Web.Syndication.SyndicationItem, Windows.Web.Syndication.TransferProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::SyndicationItem*,struct ABI::Windows::Web::Syndication::TransferProgress> __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t;
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
//#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Web::Syndication::ISyndicationItem*,ABI::Windows::Web::Syndication::TransferProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlDocument;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocument;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument ABI::Windows::Data::Xml::Dom::IXmlDocument

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
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
        namespace Security {
            namespace Credentials {
                class PasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IPasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential ABI::Windows::Security::Credentials::IPasswordCredential

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__













namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef enum SyndicationErrorStatus : int SyndicationErrorStatus;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef enum SyndicationFormat : int SyndicationFormat;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef enum SyndicationTextType : int SyndicationTextType;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef struct RetrievalProgress RetrievalProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                
                typedef struct TransferProgress TransferProgress;
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationClient;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationContent;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationGenerator;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationNode;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                class SyndicationText;
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */










/*
 *
 * Struct Windows.Web.Syndication.SyndicationErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [v1_enum, contract] */
                enum SyndicationErrorStatus : int
                {
                    SyndicationErrorStatus_Unknown = 0,
                    SyndicationErrorStatus_MissingRequiredElement = 1,
                    SyndicationErrorStatus_MissingRequiredAttribute = 2,
                    SyndicationErrorStatus_InvalidXml = 3,
                    SyndicationErrorStatus_UnexpectedContent = 4,
                    SyndicationErrorStatus_UnsupportedFormat = 5,
                };
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.SyndicationFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [v1_enum, contract] */
                enum SyndicationFormat : int
                {
                    SyndicationFormat_Atom10 = 0,
                    SyndicationFormat_Rss20 = 1,
                    SyndicationFormat_Rss10 = 2,
                    SyndicationFormat_Rss092 = 3,
                    SyndicationFormat_Rss091 = 4,
                    SyndicationFormat_Atom03 = 5,
                };
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.SyndicationTextType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [v1_enum, contract] */
                enum SyndicationTextType : int
                {
                    SyndicationTextType_Text = 0,
                    SyndicationTextType_Html = 1,
                    SyndicationTextType_Xhtml = 2,
                };
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.RetrievalProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [contract] */
                struct RetrievalProgress
                {
                    UINT32 BytesRetrieved;
                    UINT32 TotalBytesToRetrieve;
                };
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.TransferProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [contract] */
                struct TransferProgress
                {
                    UINT32 BytesSent;
                    UINT32 TotalBytesToSend;
                    UINT32 BytesRetrieved;
                    UINT32 TotalBytesToRetrieve;
                };
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationAttribute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttribute[] = L"Windows.Web.Syndication.ISyndicationAttribute";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("71E8F969-526E-4001-9A91-E84F83161AB1"), exclusiveto, contract] */
                MIDL_INTERFACE("71E8F969-526E-4001-9A91-E84F83161AB1")
                ISyndicationAttribute : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Namespace(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Namespace(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationAttribute=_uuidof(ISyndicationAttribute);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationAttributeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationAttribute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttributeFactory[] = L"Windows.Web.Syndication.ISyndicationAttributeFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("624F1599-ED3E-420F-BE86-640414886E4B"), exclusiveto, contract] */
                MIDL_INTERFACE("624F1599-ED3E-420F-BE86-640414886E4B")
                ISyndicationAttributeFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationAttribute(
                        /* [in] */__RPC__in HSTRING attributeName,
                        /* [in] */__RPC__in HSTRING attributeNamespace,
                        /* [in] */__RPC__in HSTRING attributeValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationAttribute * * syndicationAttribute
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationAttributeFactory=_uuidof(ISyndicationAttributeFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationCategory
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategory[] = L"Windows.Web.Syndication.ISyndicationCategory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("8715626F-0CBA-4A7F-89FF-ECB5281423B6"), exclusiveto, contract] */
                MIDL_INTERFACE("8715626F-0CBA-4A7F-89FF-ECB5281423B6")
                ISyndicationCategory : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Label(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Scheme(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Scheme(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Term(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Term(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationCategory=_uuidof(ISyndicationCategory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationCategoryFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationCategory
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategoryFactory[] = L"Windows.Web.Syndication.ISyndicationCategoryFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("AB42802F-49E0-4525-8AB2-AB45C02528FF"), exclusiveto, contract] */
                MIDL_INTERFACE("AB42802F-49E0-4525-8AB2-AB45C02528FF")
                ISyndicationCategoryFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationCategory(
                        /* [in] */__RPC__in HSTRING term,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationCategory * * category
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationCategoryEx(
                        /* [in] */__RPC__in HSTRING term,
                        /* [in] */__RPC__in HSTRING scheme,
                        /* [in] */__RPC__in HSTRING label,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationCategory * * category
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationCategoryFactory=_uuidof(ISyndicationCategoryFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClient[] = L"Windows.Web.Syndication.ISyndicationClient";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("9E18A9B7-7249-4B45-B229-7DF895A5A1F5"), contract] */
                MIDL_INTERFACE("9E18A9B7-7249-4B45-B229-7DF895A5A1F5")
                ISyndicationClient : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerCredential(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProxyCredential(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxResponseBufferSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxResponseBufferSize(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timeout(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Timeout(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BypassCacheOnRetrieve(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BypassCacheOnRetrieve(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetRequestHeader(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RetrieveFeedAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationClient=_uuidof(ISyndicationClient);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClientFactory[] = L"Windows.Web.Syndication.ISyndicationClientFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("2EC4B32C-A79B-4114-B29A-05DFFBAFB9A4"), exclusiveto, contract] */
                MIDL_INTERFACE("2EC4B32C-A79B-4114-B29A-05DFFBAFB9A4")
                ISyndicationClientFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationClient(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * serverCredential,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationClient * * syndicationClient
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationClientFactory=_uuidof(ISyndicationClientFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationText
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContent[] = L"Windows.Web.Syndication.ISyndicationContent";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("4641FEFE-0E55-40D0-B8D0-6A2CCBA9FC7C"), exclusiveto, contract] */
                MIDL_INTERFACE("4641FEFE-0E55-40D0-B8D0-6A2CCBA9FC7C")
                ISyndicationContent : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SourceUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationContent=_uuidof(ISyndicationContent);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContentFactory[] = L"Windows.Web.Syndication.ISyndicationContentFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("3D2FBB93-9520-4173-9388-7E2DF324A8A0"), exclusiveto, contract] */
                MIDL_INTERFACE("3D2FBB93-9520-4173-9388-7E2DF324A8A0")
                ISyndicationContentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationContent(
                        /* [in] */__RPC__in HSTRING text,
                        /* [in] */ABI::Windows::Web::Syndication::SyndicationTextType type,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationContent * * content
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationContentWithSourceUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * sourceUri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationContent * * content
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationContentFactory=_uuidof(ISyndicationContentFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationErrorStatics[] = L"Windows.Web.Syndication.ISyndicationErrorStatics";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("1FBB2361-45C7-4833-8AA0-BE5F3B58A7F4"), exclusiveto, contract] */
                MIDL_INTERFACE("1FBB2361-45C7-4833-8AA0-BE5F3B58A7F4")
                ISyndicationErrorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [in] */INT32 hresult,
                        /* [retval, out] */__RPC__out ABI::Windows::Web::Syndication::SyndicationErrorStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationErrorStatics=_uuidof(ISyndicationErrorStatics);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationFeed
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationFeed
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeed[] = L"Windows.Web.Syndication.ISyndicationFeed";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("7FFE3CD2-5B66-4D62-8403-1BC10D910D6B"), exclusiveto, contract] */
                MIDL_INTERFACE("7FFE3CD2-5B66-4D62-8403-1BC10D910D6B")
                ISyndicationFeed : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Authors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Categories(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contributors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Generator(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationGenerator * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Generator(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationGenerator * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IconUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IconUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastUpdatedTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LastUpdatedTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Links(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ImageUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rights(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Rights(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subtitle(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subtitle(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FirstUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreviousUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceFormat(
                        /* [retval, out] */__RPC__out ABI::Windows::Web::Syndication::SyndicationFormat * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Load(
                        /* [in] */__RPC__in HSTRING feed
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadFromXml(
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * feedDocument
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationFeed=_uuidof(ISyndicationFeed);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationFeedFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationFeed
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeedFactory[] = L"Windows.Web.Syndication.ISyndicationFeedFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("23472232-8BE9-48B7-8934-6205131D9357"), exclusiveto, contract] */
                MIDL_INTERFACE("23472232-8BE9-48B7-8934-6205131D9357")
                ISyndicationFeedFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationFeed(
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */__RPC__in HSTRING subtitle,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationFeed * * feed
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationFeedFactory=_uuidof(ISyndicationFeedFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGenerator[] = L"Windows.Web.Syndication.ISyndicationGenerator";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("9768B379-FB2B-4F6D-B41C-088A5868825C"), exclusiveto, contract] */
                MIDL_INTERFACE("9768B379-FB2B-4F6D-B41C-088A5868825C")
                ISyndicationGenerator : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Version(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationGenerator=_uuidof(ISyndicationGenerator);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationGeneratorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGeneratorFactory[] = L"Windows.Web.Syndication.ISyndicationGeneratorFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("A34083E3-1E26-4DBC-BA9D-1AB84BEFF97B"), exclusiveto, contract] */
                MIDL_INTERFACE("A34083E3-1E26-4DBC-BA9D-1AB84BEFF97B")
                ISyndicationGeneratorFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationGenerator(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationGenerator * * generator
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationGeneratorFactory=_uuidof(ISyndicationGeneratorFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationItem
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItem[] = L"Windows.Web.Syndication.ISyndicationItem";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("548DB883-C384-45C1-8AE8-A378C4EC486C"), exclusiveto, contract] */
                MIDL_INTERFACE("548DB883-C384-45C1-8AE8-A378C4EC486C")
                ISyndicationItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Authors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Categories(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contributors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationContent * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationContent * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastUpdatedTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LastUpdatedTime(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Links(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublishedDate(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PublishedDate(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rights(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Rights(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationFeed * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationFeed * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Summary(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Summary(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationText * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CommentsUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CommentsUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EditUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EditMediaUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ETag(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ItemUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Load(
                        /* [in] */__RPC__in HSTRING item
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadFromXml(
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * itemDocument
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationItem=_uuidof(ISyndicationItem);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItemFactory[] = L"Windows.Web.Syndication.ISyndicationItemFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("251D434F-7DB8-487A-85E4-10D191E66EBB"), exclusiveto, contract] */
                MIDL_INTERFACE("251D434F-7DB8-487A-85E4-10D191E66EBB")
                ISyndicationItemFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationItem(
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */__RPC__in_opt ABI::Windows::Web::Syndication::ISyndicationContent * content,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationItem * * item
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationItemFactory=_uuidof(ISyndicationItemFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationLink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationLink
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLink[] = L"Windows.Web.Syndication.ISyndicationLink";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("27553ABD-A10E-41B5-86BD-9759086EB0C5"), exclusiveto, contract] */
                MIDL_INTERFACE("27553ABD-A10E-41B5-86BD-9759086EB0C5")
                ISyndicationLink : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Length(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MediaType(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Relationship(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Relationship(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceLanguage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResourceLanguage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationLink=_uuidof(ISyndicationLink);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationLinkFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationLink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLinkFactory[] = L"Windows.Web.Syndication.ISyndicationLinkFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("5ED863D4-5535-48AC-98D4-C190995080B3"), exclusiveto, contract] */
                MIDL_INTERFACE("5ED863D4-5535-48AC-98D4-C190995080B3")
                ISyndicationLinkFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationLink(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationLink * * link
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationLinkEx(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in HSTRING relationship,
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */__RPC__in HSTRING mediaType,
                        /* [in] */UINT32 length,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationLink * * link
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationLinkFactory=_uuidof(ISyndicationLinkFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNode[] = L"Windows.Web.Syndication.ISyndicationNode";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("753CEF78-51F8-45C0-A9F5-F1719DEC3FB2"), contract] */
                MIDL_INTERFACE("753CEF78-51F8-45C0-A9F5-F1719DEC3FB2")
                ISyndicationNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NodeName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeNamespace(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NodeNamespace(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeValue(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NodeValue(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Language(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BaseUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BaseUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttributeExtensions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementExtensions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetXmlDocument(
                        /* [in] */ABI::Windows::Web::Syndication::SyndicationFormat format,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * * xmlDocument
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationNode=_uuidof(ISyndicationNode);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationNodeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNodeFactory[] = L"Windows.Web.Syndication.ISyndicationNodeFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("12902188-4ACB-49A8-B777-A5EB92E18A79"), exclusiveto, contract] */
                MIDL_INTERFACE("12902188-4ACB-49A8-B777-A5EB92E18A79")
                ISyndicationNodeFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationNode(
                        /* [in] */__RPC__in HSTRING nodeName,
                        /* [in] */__RPC__in HSTRING nodeNamespace,
                        /* [in] */__RPC__in HSTRING nodeValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationNode * * node
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationNodeFactory=_uuidof(ISyndicationNodeFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationPerson
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationPerson
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPerson[] = L"Windows.Web.Syndication.ISyndicationPerson";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("FA1EE5DA-A7C6-4517-A096-0143FAF29327"), exclusiveto, contract] */
                MIDL_INTERFACE("FA1EE5DA-A7C6-4517-A096-0143FAF29327")
                ISyndicationPerson : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Email(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Email(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationPerson=_uuidof(ISyndicationPerson);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationPersonFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationPerson
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPersonFactory[] = L"Windows.Web.Syndication.ISyndicationPersonFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("DCF4886D-229D-4B58-A49B-F3D2F0F5C99F"), exclusiveto, contract] */
                MIDL_INTERFACE("DCF4886D-229D-4B58-A49B-F3D2F0F5C99F")
                ISyndicationPersonFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationPerson(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationPerson * * person
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationPersonEx(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING email,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationPerson * * person
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationPersonFactory=_uuidof(ISyndicationPersonFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationText[] = L"Windows.Web.Syndication.ISyndicationText";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("B9CC5E80-313A-4091-A2A6-243E0EE923F9"), contract] */
                MIDL_INTERFACE("B9CC5E80-313A-4091-A2A6-243E0EE923F9")
                ISyndicationText : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Xml(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Xml(
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationText=_uuidof(ISyndicationText);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationTextFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationText
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationTextFactory[] = L"Windows.Web.Syndication.ISyndicationTextFactory";
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Syndication {
                /* [object, uuid("EE7342F7-11C6-4B25-AB62-E596BD162946"), exclusiveto, contract] */
                MIDL_INTERFACE("EE7342F7-11C6-4B25-AB62-E596BD162946")
                ISyndicationTextFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationText(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * syndicationText
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateSyndicationTextEx(
                        /* [in] */__RPC__in HSTRING text,
                        /* [in] */ABI::Windows::Web::Syndication::SyndicationTextType type,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Syndication::ISyndicationText * * syndicationText
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISyndicationTextFactory=_uuidof(ISyndicationTextFactory);
                
            } /* Windows */
        } /* Web */
    } /* Syndication */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationAttributeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationAttribute ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationAttribute_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationAttribute[] = L"Windows.Web.Syndication.SyndicationAttribute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationCategoryFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationCategory ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationCategory_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationCategory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationCategory[] = L"Windows.Web.Syndication.SyndicationCategory";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationClient ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationClient_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationClient[] = L"Windows.Web.Syndication.SyndicationClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationText
 *    Windows.Web.Syndication.ISyndicationNode
 *    Windows.Web.Syndication.ISyndicationContent ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationContent[] = L"Windows.Web.Syndication.SyndicationContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Syndication.ISyndicationErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationError_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationError[] = L"Windows.Web.Syndication.SyndicationError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationFeed
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationFeedFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationFeed ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationFeed_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationFeed_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationFeed[] = L"Windows.Web.Syndication.SyndicationFeed";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationGeneratorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationGenerator ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationGenerator_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationGenerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationGenerator[] = L"Windows.Web.Syndication.SyndicationGenerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationItem ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationItem_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationItem[] = L"Windows.Web.Syndication.SyndicationItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationLink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationLinkFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationLink ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationLink_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationLink_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationLink[] = L"Windows.Web.Syndication.SyndicationLink";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationNodeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationNode ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationNode_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationNode[] = L"Windows.Web.Syndication.SyndicationNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationPerson
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationPersonFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationPerson ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationPerson_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationPerson_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationPerson[] = L"Windows.Web.Syndication.SyndicationPerson";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationTextFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationText ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationText_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationText[] = L"Windows.Web.Syndication.SyndicationText";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory;

#endif // ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson;

typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;

interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson;

typedef  struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;

interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson;

typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [in] */ __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;

interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson;

typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, /* [in] */ __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;

interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;

#if !defined(____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__



#if !defined(____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,/* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_GetResults(This)	\
    ( (This)->lpVtbl -> GetResults(This) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument;

#endif // ____x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument_FWD_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__







typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__














typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus;


typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat;


typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType;


typedef struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;


typedef struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;












































/*
 *
 * Struct Windows.Web.Syndication.SyndicationErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus
{
    SyndicationErrorStatus_Unknown = 0,
    SyndicationErrorStatus_MissingRequiredElement = 1,
    SyndicationErrorStatus_MissingRequiredAttribute = 2,
    SyndicationErrorStatus_InvalidXml = 3,
    SyndicationErrorStatus_UnexpectedContent = 4,
    SyndicationErrorStatus_UnsupportedFormat = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.SyndicationFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat
{
    SyndicationFormat_Atom10 = 0,
    SyndicationFormat_Rss20 = 1,
    SyndicationFormat_Rss10 = 2,
    SyndicationFormat_Rss092 = 3,
    SyndicationFormat_Rss091 = 4,
    SyndicationFormat_Atom03 = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.SyndicationTextType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType
{
    SyndicationTextType_Text = 0,
    SyndicationTextType_Html = 1,
    SyndicationTextType_Xhtml = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.RetrievalProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress
{
    UINT32 BytesRetrieved;
    UINT32 TotalBytesToRetrieve;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Web.Syndication.TransferProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress
{
    UINT32 BytesSent;
    UINT32 TotalBytesToSend;
    UINT32 BytesRetrieved;
    UINT32 TotalBytesToRetrieve;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationAttribute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttribute[] = L"Windows.Web.Syndication.ISyndicationAttribute";
/* [object, uuid("71E8F969-526E-4001-9A91-E84F83161AB1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Namespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_get_Namespace(This,value) \
    ( (This)->lpVtbl->get_Namespace(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_put_Namespace(This,value) \
    ( (This)->lpVtbl->put_Namespace(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationAttributeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationAttribute
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttributeFactory[] = L"Windows.Web.Syndication.ISyndicationAttributeFactory";
/* [object, uuid("624F1599-ED3E-420F-BE86-640414886E4B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationAttribute )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
        /* [in] */__RPC__in HSTRING attributeName,
        /* [in] */__RPC__in HSTRING attributeNamespace,
        /* [in] */__RPC__in HSTRING attributeValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * * syndicationAttribute
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_CreateSyndicationAttribute(This,attributeName,attributeNamespace,attributeValue,syndicationAttribute) \
    ( (This)->lpVtbl->CreateSyndicationAttribute(This,attributeName,attributeNamespace,attributeValue,syndicationAttribute) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationCategory
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategory[] = L"Windows.Web.Syndication.ISyndicationCategory";
/* [object, uuid("8715626F-0CBA-4A7F-89FF-ECB5281423B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Scheme )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Scheme )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Term )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Term )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_put_Label(This,value) \
    ( (This)->lpVtbl->put_Label(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_get_Scheme(This,value) \
    ( (This)->lpVtbl->get_Scheme(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_put_Scheme(This,value) \
    ( (This)->lpVtbl->put_Scheme(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_get_Term(This,value) \
    ( (This)->lpVtbl->get_Term(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_put_Term(This,value) \
    ( (This)->lpVtbl->put_Term(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationCategoryFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationCategory
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategoryFactory[] = L"Windows.Web.Syndication.ISyndicationCategoryFactory";
/* [object, uuid("AB42802F-49E0-4525-8AB2-AB45C02528FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationCategory )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
        /* [in] */__RPC__in HSTRING term,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * * category
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationCategoryEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
        /* [in] */__RPC__in HSTRING term,
        /* [in] */__RPC__in HSTRING scheme,
        /* [in] */__RPC__in HSTRING label,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * * category
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_CreateSyndicationCategory(This,term,category) \
    ( (This)->lpVtbl->CreateSyndicationCategory(This,term,category) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_CreateSyndicationCategoryEx(This,term,scheme,label,category) \
    ( (This)->lpVtbl->CreateSyndicationCategoryEx(This,term,scheme,label,category) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClient[] = L"Windows.Web.Syndication.ISyndicationClient";
/* [object, uuid("9E18A9B7-7249-4B45-B229-7DF895A5A1F5"), contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxResponseBufferSize )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxResponseBufferSize )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BypassCacheOnRetrieve )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BypassCacheOnRetrieve )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveFeedAsync )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_get_ServerCredential(This,value) \
    ( (This)->lpVtbl->get_ServerCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_put_ServerCredential(This,value) \
    ( (This)->lpVtbl->put_ServerCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_get_ProxyCredential(This,value) \
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_put_ProxyCredential(This,value) \
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_get_MaxResponseBufferSize(This,value) \
    ( (This)->lpVtbl->get_MaxResponseBufferSize(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_put_MaxResponseBufferSize(This,value) \
    ( (This)->lpVtbl->put_MaxResponseBufferSize(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_get_Timeout(This,value) \
    ( (This)->lpVtbl->get_Timeout(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_put_Timeout(This,value) \
    ( (This)->lpVtbl->put_Timeout(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_get_BypassCacheOnRetrieve(This,value) \
    ( (This)->lpVtbl->get_BypassCacheOnRetrieve(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_put_BypassCacheOnRetrieve(This,value) \
    ( (This)->lpVtbl->put_BypassCacheOnRetrieve(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_SetRequestHeader(This,name,value) \
    ( (This)->lpVtbl->SetRequestHeader(This,name,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_RetrieveFeedAsync(This,uri,operation) \
    ( (This)->lpVtbl->RetrieveFeedAsync(This,uri,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClientFactory[] = L"Windows.Web.Syndication.ISyndicationClientFactory";
/* [object, uuid("2EC4B32C-A79B-4114-B29A-05DFFBAFB9A4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationClient )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * serverCredential,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * * syndicationClient
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_CreateSyndicationClient(This,serverCredential,syndicationClient) \
    ( (This)->lpVtbl->CreateSyndicationClient(This,serverCredential,syndicationClient) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationContent
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationText
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContent[] = L"Windows.Web.Syndication.ISyndicationContent";
/* [object, uuid("4641FEFE-0E55-40D0-B8D0-6A2CCBA9FC7C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_get_SourceUri(This,value) \
    ( (This)->lpVtbl->get_SourceUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_put_SourceUri(This,value) \
    ( (This)->lpVtbl->put_SourceUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationContentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationContent
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContentFactory[] = L"Windows.Web.Syndication.ISyndicationContentFactory";
/* [object, uuid("3D2FBB93-9520-4173-9388-7E2DF324A8A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationContent )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
        /* [in] */__RPC__in HSTRING text,
        /* [in] */__x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * content
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationContentWithSourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * sourceUri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * content
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_CreateSyndicationContent(This,text,type,content) \
    ( (This)->lpVtbl->CreateSyndicationContent(This,text,type,content) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_CreateSyndicationContentWithSourceUri(This,sourceUri,content) \
    ( (This)->lpVtbl->CreateSyndicationContentWithSourceUri(This,sourceUri,content) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationErrorStatics[] = L"Windows.Web.Syndication.ISyndicationErrorStatics";
/* [object, uuid("1FBB2361-45C7-4833-8AA0-BE5F3B58A7F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
        /* [in] */INT32 hresult,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_GetStatus(This,hresult,status) \
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationFeed
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationFeed
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeed[] = L"Windows.Web.Syndication.ISyndicationFeed";
/* [object, uuid("7FFE3CD2-5B66-4D62-8403-1BC10D910D6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Authors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contributors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Generator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Generator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IconUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IconUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Links )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ImageUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FirstUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreviousUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceFormat )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in HSTRING feed
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromXml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * feedDocument
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Authors(This,value) \
    ( (This)->lpVtbl->get_Authors(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Categories(This,value) \
    ( (This)->lpVtbl->get_Categories(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Contributors(This,value) \
    ( (This)->lpVtbl->get_Contributors(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Generator(This,value) \
    ( (This)->lpVtbl->get_Generator(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_Generator(This,value) \
    ( (This)->lpVtbl->put_Generator(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_IconUri(This,value) \
    ( (This)->lpVtbl->get_IconUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_IconUri(This,value) \
    ( (This)->lpVtbl->put_IconUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Items(This,value) \
    ( (This)->lpVtbl->get_Items(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_LastUpdatedTime(This,value) \
    ( (This)->lpVtbl->get_LastUpdatedTime(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_LastUpdatedTime(This,value) \
    ( (This)->lpVtbl->put_LastUpdatedTime(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Links(This,value) \
    ( (This)->lpVtbl->get_Links(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_ImageUri(This,value) \
    ( (This)->lpVtbl->get_ImageUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_ImageUri(This,value) \
    ( (This)->lpVtbl->put_ImageUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Rights(This,value) \
    ( (This)->lpVtbl->get_Rights(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_Rights(This,value) \
    ( (This)->lpVtbl->put_Rights(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Subtitle(This,value) \
    ( (This)->lpVtbl->get_Subtitle(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_Subtitle(This,value) \
    ( (This)->lpVtbl->put_Subtitle(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_FirstUri(This,value) \
    ( (This)->lpVtbl->get_FirstUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_LastUri(This,value) \
    ( (This)->lpVtbl->get_LastUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_NextUri(This,value) \
    ( (This)->lpVtbl->get_NextUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_PreviousUri(This,value) \
    ( (This)->lpVtbl->get_PreviousUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_get_SourceFormat(This,value) \
    ( (This)->lpVtbl->get_SourceFormat(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_Load(This,feed) \
    ( (This)->lpVtbl->Load(This,feed) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_LoadFromXml(This,feedDocument) \
    ( (This)->lpVtbl->LoadFromXml(This,feedDocument) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationFeedFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationFeed
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeedFactory[] = L"Windows.Web.Syndication.ISyndicationFeedFactory";
/* [object, uuid("23472232-8BE9-48B7-8934-6205131D9357"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationFeed )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__RPC__in HSTRING subtitle,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * * feed
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_CreateSyndicationFeed(This,title,subtitle,uri,feed) \
    ( (This)->lpVtbl->CreateSyndicationFeed(This,title,subtitle,uri,feed) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGenerator[] = L"Windows.Web.Syndication.ISyndicationGenerator";
/* [object, uuid("9768B379-FB2B-4F6D-B41C-088A5868825C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_put_Version(This,value) \
    ( (This)->lpVtbl->put_Version(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationGeneratorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGeneratorFactory[] = L"Windows.Web.Syndication.ISyndicationGeneratorFactory";
/* [object, uuid("A34083E3-1E26-4DBC-BA9D-1AB84BEFF97B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationGenerator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * * generator
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_CreateSyndicationGenerator(This,text,generator) \
    ( (This)->lpVtbl->CreateSyndicationGenerator(This,text,generator) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationItem
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItem[] = L"Windows.Web.Syndication.ISyndicationItem";
/* [object, uuid("548DB883-C384-45C1-8AE8-A378C4EC486C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Authors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contributors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Links )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublishedDate )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PublishedDate )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Summary )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Summary )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CommentsUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CommentsUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EditUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EditMediaUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ETag )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ItemUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in HSTRING item
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromXml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * itemDocument
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Authors(This,value) \
    ( (This)->lpVtbl->get_Authors(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Categories(This,value) \
    ( (This)->lpVtbl->get_Categories(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Contributors(This,value) \
    ( (This)->lpVtbl->get_Contributors(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_LastUpdatedTime(This,value) \
    ( (This)->lpVtbl->get_LastUpdatedTime(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_LastUpdatedTime(This,value) \
    ( (This)->lpVtbl->put_LastUpdatedTime(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Links(This,value) \
    ( (This)->lpVtbl->get_Links(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_PublishedDate(This,value) \
    ( (This)->lpVtbl->get_PublishedDate(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_PublishedDate(This,value) \
    ( (This)->lpVtbl->put_PublishedDate(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Rights(This,value) \
    ( (This)->lpVtbl->get_Rights(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Rights(This,value) \
    ( (This)->lpVtbl->put_Rights(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Summary(This,value) \
    ( (This)->lpVtbl->get_Summary(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Summary(This,value) \
    ( (This)->lpVtbl->put_Summary(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_CommentsUri(This,value) \
    ( (This)->lpVtbl->get_CommentsUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_put_CommentsUri(This,value) \
    ( (This)->lpVtbl->put_CommentsUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_EditUri(This,value) \
    ( (This)->lpVtbl->get_EditUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_EditMediaUri(This,value) \
    ( (This)->lpVtbl->get_EditMediaUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_ETag(This,value) \
    ( (This)->lpVtbl->get_ETag(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_get_ItemUri(This,value) \
    ( (This)->lpVtbl->get_ItemUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_Load(This,item) \
    ( (This)->lpVtbl->Load(This,item) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_LoadFromXml(This,itemDocument) \
    ( (This)->lpVtbl->LoadFromXml(This,itemDocument) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItemFactory[] = L"Windows.Web.Syndication.ISyndicationItemFactory";
/* [object, uuid("251D434F-7DB8-487A-85E4-10D191E66EBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationItem )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * content,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * * item
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_CreateSyndicationItem(This,title,content,uri,item) \
    ( (This)->lpVtbl->CreateSyndicationItem(This,title,content,uri,item) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationLink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationLink
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLink[] = L"Windows.Web.Syndication.ISyndicationLink";
/* [object, uuid("27553ABD-A10E-41B5-86BD-9759086EB0C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Relationship )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Relationship )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceLanguage )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResourceLanguage )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_Length(This,value) \
    ( (This)->lpVtbl->put_Length(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_MediaType(This,value) \
    ( (This)->lpVtbl->get_MediaType(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_MediaType(This,value) \
    ( (This)->lpVtbl->put_MediaType(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_Relationship(This,value) \
    ( (This)->lpVtbl->get_Relationship(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_Relationship(This,value) \
    ( (This)->lpVtbl->put_Relationship(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_get_ResourceLanguage(This,value) \
    ( (This)->lpVtbl->get_ResourceLanguage(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_put_ResourceLanguage(This,value) \
    ( (This)->lpVtbl->put_ResourceLanguage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationLinkFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationLink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLinkFactory[] = L"Windows.Web.Syndication.ISyndicationLinkFactory";
/* [object, uuid("5ED863D4-5535-48AC-98D4-C190995080B3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationLink )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * * link
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationLinkEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING relationship,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__RPC__in HSTRING mediaType,
        /* [in] */UINT32 length,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * * link
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_CreateSyndicationLink(This,uri,link) \
    ( (This)->lpVtbl->CreateSyndicationLink(This,uri,link) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_CreateSyndicationLinkEx(This,uri,relationship,title,mediaType,length,link) \
    ( (This)->lpVtbl->CreateSyndicationLinkEx(This,uri,relationship,title,mediaType,length,link) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNode[] = L"Windows.Web.Syndication.ISyndicationNode";
/* [object, uuid("753CEF78-51F8-45C0-A9F5-F1719DEC3FB2"), contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeName )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NodeName )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeNamespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NodeNamespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeValue )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NodeValue )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BaseUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BaseUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttributeExtensions )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementExtensions )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetXmlDocument )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
        /* [in] */__x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat format,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * xmlDocument
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_NodeName(This,value) \
    ( (This)->lpVtbl->get_NodeName(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_put_NodeName(This,value) \
    ( (This)->lpVtbl->put_NodeName(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_NodeNamespace(This,value) \
    ( (This)->lpVtbl->get_NodeNamespace(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_put_NodeNamespace(This,value) \
    ( (This)->lpVtbl->put_NodeNamespace(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_NodeValue(This,value) \
    ( (This)->lpVtbl->get_NodeValue(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_put_NodeValue(This,value) \
    ( (This)->lpVtbl->put_NodeValue(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_put_Language(This,value) \
    ( (This)->lpVtbl->put_Language(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_BaseUri(This,value) \
    ( (This)->lpVtbl->get_BaseUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_put_BaseUri(This,value) \
    ( (This)->lpVtbl->put_BaseUri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_AttributeExtensions(This,value) \
    ( (This)->lpVtbl->get_AttributeExtensions(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_get_ElementExtensions(This,value) \
    ( (This)->lpVtbl->get_ElementExtensions(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_GetXmlDocument(This,format,xmlDocument) \
    ( (This)->lpVtbl->GetXmlDocument(This,format,xmlDocument) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationNodeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNodeFactory[] = L"Windows.Web.Syndication.ISyndicationNodeFactory";
/* [object, uuid("12902188-4ACB-49A8-B777-A5EB92E18A79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationNode )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
        /* [in] */__RPC__in HSTRING nodeName,
        /* [in] */__RPC__in HSTRING nodeNamespace,
        /* [in] */__RPC__in HSTRING nodeValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * * node
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_CreateSyndicationNode(This,nodeName,nodeNamespace,nodeValue,node) \
    ( (This)->lpVtbl->CreateSyndicationNode(This,nodeName,nodeNamespace,nodeValue,node) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationPerson
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationPerson
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPerson[] = L"Windows.Web.Syndication.ISyndicationPerson";
/* [object, uuid("FA1EE5DA-A7C6-4517-A096-0143FAF29327"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Email )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Email )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_get_Email(This,value) \
    ( (This)->lpVtbl->get_Email(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_put_Email(This,value) \
    ( (This)->lpVtbl->put_Email(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationPersonFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationPerson
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPersonFactory[] = L"Windows.Web.Syndication.ISyndicationPersonFactory";
/* [object, uuid("DCF4886D-229D-4B58-A49B-F3D2F0F5C99F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationPerson )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * * person
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationPersonEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING email,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * * person
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_CreateSyndicationPerson(This,name,person) \
    ( (This)->lpVtbl->CreateSyndicationPerson(This,name,person) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_CreateSyndicationPersonEx(This,name,email,uri,person) \
    ( (This)->lpVtbl->CreateSyndicationPersonEx(This,name,email,uri,person) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Web.Syndication.ISyndicationNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationText[] = L"Windows.Web.Syndication.ISyndicationText";
/* [object, uuid("B9CC5E80-313A-4091-A2A6-243E0EE923F9"), contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Xml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Xml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_get_Xml(This,value) \
    ( (This)->lpVtbl->get_Xml(This,value) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_put_Xml(This,value) \
    ( (This)->lpVtbl->put_Xml(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Web.Syndication.ISyndicationTextFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Web.Syndication.SyndicationText
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationTextFactory[] = L"Windows.Web.Syndication.ISyndicationTextFactory";
/* [object, uuid("EE7342F7-11C6-4B25-AB62-E596BD162946"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationText )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * syndicationText
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationTextEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
        /* [in] */__RPC__in HSTRING text,
        /* [in] */__x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * syndicationText
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl;

interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_CreateSyndicationText(This,text,syndicationText) \
    ( (This)->lpVtbl->CreateSyndicationText(This,text,syndicationText) )

#define __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_CreateSyndicationTextEx(This,text,type,syndicationText) \
    ( (This)->lpVtbl->CreateSyndicationTextEx(This,text,type,syndicationText) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory;
#endif /* !defined(____x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationAttributeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationAttribute ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationAttribute_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationAttribute[] = L"Windows.Web.Syndication.SyndicationAttribute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationCategoryFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationCategory ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationCategory_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationCategory_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationCategory[] = L"Windows.Web.Syndication.SyndicationCategory";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationClient ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationClient_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationClient[] = L"Windows.Web.Syndication.SyndicationClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationContentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationText
 *    Windows.Web.Syndication.ISyndicationNode
 *    Windows.Web.Syndication.ISyndicationContent ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationContent_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationContent[] = L"Windows.Web.Syndication.SyndicationContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Web.Syndication.ISyndicationErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationError_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationError[] = L"Windows.Web.Syndication.SyndicationError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationFeed
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationFeedFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationFeed ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationFeed_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationFeed_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationFeed[] = L"Windows.Web.Syndication.SyndicationFeed";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationGeneratorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationGenerator ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationGenerator_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationGenerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationGenerator[] = L"Windows.Web.Syndication.SyndicationGenerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationItem ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationItem_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationItem[] = L"Windows.Web.Syndication.SyndicationItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationLink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationLinkFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationLink ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationLink_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationLink_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationLink[] = L"Windows.Web.Syndication.SyndicationLink";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationNodeFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationNode ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationNode_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationNode[] = L"Windows.Web.Syndication.SyndicationNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationPerson
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationPersonFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationPerson ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationPerson_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationPerson_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationPerson[] = L"Windows.Web.Syndication.SyndicationPerson";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Web.Syndication.SyndicationText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Web.Syndication.ISyndicationTextFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Web.Syndication.ISyndicationText ** Default Interface **
 *    Windows.Web.Syndication.ISyndicationNode
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Web_Syndication_SyndicationText_DEFINED
#define RUNTIMECLASS_Windows_Web_Syndication_SyndicationText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationText[] = L"Windows.Web.Syndication.SyndicationText";
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
#endif // __windows2Eweb2Esyndication_p_h__

#endif // __windows2Eweb2Esyndication_h__
