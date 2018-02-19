/* Header file automatically generated from windows.graphics.printing.idl */
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
#ifndef __windows2Egraphics2Eprinting_h__
#define __windows2Egraphics2Eprinting_h__
#ifndef __windows2Egraphics2Eprinting_p_h__
#define __windows2Egraphics2Eprinting_p_h__


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
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskSourceRequestedHandler;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedHandler

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintManager;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager ABI::Windows::Graphics::Printing::IPrintManager

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintManagerStatic;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic ABI::Windows::Graphics::Printing::IPrintManagerStatic

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintManagerStatic2;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 ABI::Windows::Graphics::Printing::IPrintManagerStatic2

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintPageInfo;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo ABI::Windows::Graphics::Printing::IPrintPageInfo

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTask;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask ABI::Windows::Graphics::Printing::IPrintTask

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTask2;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 ABI::Windows::Graphics::Printing::IPrintTask2

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskCompletedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs ABI::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptions;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions ABI::Windows::Graphics::Printing::IPrintTaskOptions

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCore;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCoreProperties;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties ABI::Windows::Graphics::Printing::IPrintTaskOptionsCoreProperties

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCoreUIConfiguration;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration ABI::Windows::Graphics::Printing::IPrintTaskOptionsCoreUIConfiguration

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskProgressingEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs ABI::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskRequest;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest ABI::Windows::Graphics::Printing::IPrintTaskRequest

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskRequestedDeferral;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral ABI::Windows::Graphics::Printing::IPrintTaskRequestedDeferral

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskRequestedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs ABI::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskSourceRequestedArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskSourceRequestedDeferral;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskTargetDeviceSupport;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport ABI::Windows::Graphics::Printing::IPrintTaskTargetDeviceSupport

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IStandardPrintTaskOptionsStatic;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic ABI::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IStandardPrintTaskOptionsStatic2;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 ABI::Windows::Graphics::Printing::IStandardPrintTaskOptionsStatic2

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintManager;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskRequestedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a8cb877-70c5-54ce-8b42-d790e2914859"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintManager*,ABI::Windows::Graphics::Printing::PrintTaskRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintManager*, ABI::Windows::Graphics::Printing::IPrintManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTaskRequestedEventArgs*, ABI::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.PrintManager, Windows.Graphics.Printing.PrintTaskRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintManager*,ABI::Windows::Graphics::Printing::PrintTaskRequestedEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintManager*,ABI::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintManager*,ABI::Windows::Graphics::Printing::IPrintTaskRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTask;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4cc141d4-c0d9-5220-b1ce-80fff3bd2d44"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTask*, ABI::Windows::Graphics::Printing::IPrintTask*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.PrintTask, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,IInspectable*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskCompletedEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b0b02549-b9ad-5226-898a-7b563b46640c"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,ABI::Windows::Graphics::Printing::PrintTaskCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTask*, ABI::Windows::Graphics::Printing::IPrintTask*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTaskCompletedEventArgs*, ABI::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.PrintTask, Windows.Graphics.Printing.PrintTaskCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,ABI::Windows::Graphics::Printing::PrintTaskCompletedEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,ABI::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,ABI::Windows::Graphics::Printing::IPrintTaskCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskProgressingEventArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c08d0524-5899-536c-8f46-55fdaa4cf78b"))
ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,ABI::Windows::Graphics::Printing::PrintTaskProgressingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTask*, ABI::Windows::Graphics::Printing::IPrintTask*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Graphics::Printing::PrintTaskProgressingEventArgs*, ABI::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Graphics.Printing.PrintTask, Windows.Graphics.Printing.PrintTaskProgressingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Graphics::Printing::PrintTask*,ABI::Windows::Graphics::Printing::PrintTaskProgressingEventArgs*> __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,ABI::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Graphics::Printing::IPrintTask*,ABI::Windows::Graphics::Printing::IPrintTaskProgressingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_USE */


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





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackagePropertySet;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySet;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
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





namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintBinding : int PrintBinding;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintBordering : int PrintBordering;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintCollation : int PrintCollation;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintColorMode : int PrintColorMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintDuplex : int PrintDuplex;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintHolePunch : int PrintHolePunch;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintMediaSize : int PrintMediaSize;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintMediaType : int PrintMediaType;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintOrientation : int PrintOrientation;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintQuality : int PrintQuality;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintStaple : int PrintStaple;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef enum PrintTaskCompletion : int PrintTaskCompletion;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                
                typedef struct PrintPageDescription PrintPageDescription;
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintPageInfo;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskOptions;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskRequest;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskRequestedDeferral;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskSourceRequestedArgs;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskSourceRequestedDeferral;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */











/*
 *
 * Struct Windows.Graphics.Printing.PrintBinding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintBinding : int
                {
                    PrintBinding_Default = 0,
                    PrintBinding_NotAvailable = 1,
                    PrintBinding_PrinterCustom = 2,
                    PrintBinding_None = 3,
                    PrintBinding_Bale = 4,
                    PrintBinding_BindBottom = 5,
                    PrintBinding_BindLeft = 6,
                    PrintBinding_BindRight = 7,
                    PrintBinding_BindTop = 8,
                    PrintBinding_Booklet = 9,
                    PrintBinding_EdgeStitchBottom = 10,
                    PrintBinding_EdgeStitchLeft = 11,
                    PrintBinding_EdgeStitchRight = 12,
                    PrintBinding_EdgeStitchTop = 13,
                    PrintBinding_Fold = 14,
                    PrintBinding_JogOffset = 15,
                    PrintBinding_Trim = 16,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintBordering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintBordering : int
                {
                    PrintBordering_Default = 0,
                    PrintBordering_NotAvailable = 1,
                    PrintBordering_PrinterCustom = 2,
                    PrintBordering_Bordered = 3,
                    PrintBordering_Borderless = 4,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Graphics.Printing.PrintCollation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintCollation : int
                {
                    PrintCollation_Default = 0,
                    PrintCollation_NotAvailable = 1,
                    PrintCollation_PrinterCustom = 2,
                    PrintCollation_Collated = 3,
                    PrintCollation_Uncollated = 4,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintColorMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintColorMode : int
                {
                    PrintColorMode_Default = 0,
                    PrintColorMode_NotAvailable = 1,
                    PrintColorMode_PrinterCustom = 2,
                    PrintColorMode_Color = 3,
                    PrintColorMode_Grayscale = 4,
                    PrintColorMode_Monochrome = 5,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintDuplex
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintDuplex : int
                {
                    PrintDuplex_Default = 0,
                    PrintDuplex_NotAvailable = 1,
                    PrintDuplex_PrinterCustom = 2,
                    PrintDuplex_OneSided = 3,
                    PrintDuplex_TwoSidedShortEdge = 4,
                    PrintDuplex_TwoSidedLongEdge = 5,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintHolePunch
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintHolePunch : int
                {
                    PrintHolePunch_Default = 0,
                    PrintHolePunch_NotAvailable = 1,
                    PrintHolePunch_PrinterCustom = 2,
                    PrintHolePunch_None = 3,
                    PrintHolePunch_LeftEdge = 4,
                    PrintHolePunch_RightEdge = 5,
                    PrintHolePunch_TopEdge = 6,
                    PrintHolePunch_BottomEdge = 7,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintMediaSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintMediaSize : int
                {
                    PrintMediaSize_Default = 0,
                    PrintMediaSize_NotAvailable = 1,
                    PrintMediaSize_PrinterCustom = 2,
                    PrintMediaSize_BusinessCard = 3,
                    PrintMediaSize_CreditCard = 4,
                    PrintMediaSize_IsoA0 = 5,
                    PrintMediaSize_IsoA1 = 6,
                    PrintMediaSize_IsoA10 = 7,
                    PrintMediaSize_IsoA2 = 8,
                    PrintMediaSize_IsoA3 = 9,
                    PrintMediaSize_IsoA3Extra = 10,
                    PrintMediaSize_IsoA3Rotated = 11,
                    PrintMediaSize_IsoA4 = 12,
                    PrintMediaSize_IsoA4Extra = 13,
                    PrintMediaSize_IsoA4Rotated = 14,
                    PrintMediaSize_IsoA5 = 15,
                    PrintMediaSize_IsoA5Extra = 16,
                    PrintMediaSize_IsoA5Rotated = 17,
                    PrintMediaSize_IsoA6 = 18,
                    PrintMediaSize_IsoA6Rotated = 19,
                    PrintMediaSize_IsoA7 = 20,
                    PrintMediaSize_IsoA8 = 21,
                    PrintMediaSize_IsoA9 = 22,
                    PrintMediaSize_IsoB0 = 23,
                    PrintMediaSize_IsoB1 = 24,
                    PrintMediaSize_IsoB10 = 25,
                    PrintMediaSize_IsoB2 = 26,
                    PrintMediaSize_IsoB3 = 27,
                    PrintMediaSize_IsoB4 = 28,
                    PrintMediaSize_IsoB4Envelope = 29,
                    PrintMediaSize_IsoB5Envelope = 30,
                    PrintMediaSize_IsoB5Extra = 31,
                    PrintMediaSize_IsoB7 = 32,
                    PrintMediaSize_IsoB8 = 33,
                    PrintMediaSize_IsoB9 = 34,
                    PrintMediaSize_IsoC0 = 35,
                    PrintMediaSize_IsoC1 = 36,
                    PrintMediaSize_IsoC10 = 37,
                    PrintMediaSize_IsoC2 = 38,
                    PrintMediaSize_IsoC3 = 39,
                    PrintMediaSize_IsoC3Envelope = 40,
                    PrintMediaSize_IsoC4 = 41,
                    PrintMediaSize_IsoC4Envelope = 42,
                    PrintMediaSize_IsoC5 = 43,
                    PrintMediaSize_IsoC5Envelope = 44,
                    PrintMediaSize_IsoC6 = 45,
                    PrintMediaSize_IsoC6C5Envelope = 46,
                    PrintMediaSize_IsoC6Envelope = 47,
                    PrintMediaSize_IsoC7 = 48,
                    PrintMediaSize_IsoC8 = 49,
                    PrintMediaSize_IsoC9 = 50,
                    PrintMediaSize_IsoDLEnvelope = 51,
                    PrintMediaSize_IsoDLEnvelopeRotated = 52,
                    PrintMediaSize_IsoSRA3 = 53,
                    PrintMediaSize_Japan2LPhoto = 54,
                    PrintMediaSize_JapanChou3Envelope = 55,
                    PrintMediaSize_JapanChou3EnvelopeRotated = 56,
                    PrintMediaSize_JapanChou4Envelope = 57,
                    PrintMediaSize_JapanChou4EnvelopeRotated = 58,
                    PrintMediaSize_JapanDoubleHagakiPostcard = 59,
                    PrintMediaSize_JapanDoubleHagakiPostcardRotated = 60,
                    PrintMediaSize_JapanHagakiPostcard = 61,
                    PrintMediaSize_JapanHagakiPostcardRotated = 62,
                    PrintMediaSize_JapanKaku2Envelope = 63,
                    PrintMediaSize_JapanKaku2EnvelopeRotated = 64,
                    PrintMediaSize_JapanKaku3Envelope = 65,
                    PrintMediaSize_JapanKaku3EnvelopeRotated = 66,
                    PrintMediaSize_JapanLPhoto = 67,
                    PrintMediaSize_JapanQuadrupleHagakiPostcard = 68,
                    PrintMediaSize_JapanYou1Envelope = 69,
                    PrintMediaSize_JapanYou2Envelope = 70,
                    PrintMediaSize_JapanYou3Envelope = 71,
                    PrintMediaSize_JapanYou4Envelope = 72,
                    PrintMediaSize_JapanYou4EnvelopeRotated = 73,
                    PrintMediaSize_JapanYou6Envelope = 74,
                    PrintMediaSize_JapanYou6EnvelopeRotated = 75,
                    PrintMediaSize_JisB0 = 76,
                    PrintMediaSize_JisB1 = 77,
                    PrintMediaSize_JisB10 = 78,
                    PrintMediaSize_JisB2 = 79,
                    PrintMediaSize_JisB3 = 80,
                    PrintMediaSize_JisB4 = 81,
                    PrintMediaSize_JisB4Rotated = 82,
                    PrintMediaSize_JisB5 = 83,
                    PrintMediaSize_JisB5Rotated = 84,
                    PrintMediaSize_JisB6 = 85,
                    PrintMediaSize_JisB6Rotated = 86,
                    PrintMediaSize_JisB7 = 87,
                    PrintMediaSize_JisB8 = 88,
                    PrintMediaSize_JisB9 = 89,
                    PrintMediaSize_NorthAmerica10x11 = 90,
                    PrintMediaSize_NorthAmerica10x12 = 91,
                    PrintMediaSize_NorthAmerica10x14 = 92,
                    PrintMediaSize_NorthAmerica11x17 = 93,
                    PrintMediaSize_NorthAmerica14x17 = 94,
                    PrintMediaSize_NorthAmerica4x6 = 95,
                    PrintMediaSize_NorthAmerica4x8 = 96,
                    PrintMediaSize_NorthAmerica5x7 = 97,
                    PrintMediaSize_NorthAmerica8x10 = 98,
                    PrintMediaSize_NorthAmerica9x11 = 99,
                    PrintMediaSize_NorthAmericaArchitectureASheet = 100,
                    PrintMediaSize_NorthAmericaArchitectureBSheet = 101,
                    PrintMediaSize_NorthAmericaArchitectureCSheet = 102,
                    PrintMediaSize_NorthAmericaArchitectureDSheet = 103,
                    PrintMediaSize_NorthAmericaArchitectureESheet = 104,
                    PrintMediaSize_NorthAmericaCSheet = 105,
                    PrintMediaSize_NorthAmericaDSheet = 106,
                    PrintMediaSize_NorthAmericaESheet = 107,
                    PrintMediaSize_NorthAmericaExecutive = 108,
                    PrintMediaSize_NorthAmericaGermanLegalFanfold = 109,
                    PrintMediaSize_NorthAmericaGermanStandardFanfold = 110,
                    PrintMediaSize_NorthAmericaLegal = 111,
                    PrintMediaSize_NorthAmericaLegalExtra = 112,
                    PrintMediaSize_NorthAmericaLetter = 113,
                    PrintMediaSize_NorthAmericaLetterExtra = 114,
                    PrintMediaSize_NorthAmericaLetterPlus = 115,
                    PrintMediaSize_NorthAmericaLetterRotated = 116,
                    PrintMediaSize_NorthAmericaMonarchEnvelope = 117,
                    PrintMediaSize_NorthAmericaNote = 118,
                    PrintMediaSize_NorthAmericaNumber10Envelope = 119,
                    PrintMediaSize_NorthAmericaNumber10EnvelopeRotated = 120,
                    PrintMediaSize_NorthAmericaNumber11Envelope = 121,
                    PrintMediaSize_NorthAmericaNumber12Envelope = 122,
                    PrintMediaSize_NorthAmericaNumber14Envelope = 123,
                    PrintMediaSize_NorthAmericaNumber9Envelope = 124,
                    PrintMediaSize_NorthAmericaPersonalEnvelope = 125,
                    PrintMediaSize_NorthAmericaQuarto = 126,
                    PrintMediaSize_NorthAmericaStatement = 127,
                    PrintMediaSize_NorthAmericaSuperA = 128,
                    PrintMediaSize_NorthAmericaSuperB = 129,
                    PrintMediaSize_NorthAmericaTabloid = 130,
                    PrintMediaSize_NorthAmericaTabloidExtra = 131,
                    PrintMediaSize_OtherMetricA3Plus = 132,
                    PrintMediaSize_OtherMetricA4Plus = 133,
                    PrintMediaSize_OtherMetricFolio = 134,
                    PrintMediaSize_OtherMetricInviteEnvelope = 135,
                    PrintMediaSize_OtherMetricItalianEnvelope = 136,
                    PrintMediaSize_Prc10Envelope = 137,
                    PrintMediaSize_Prc10EnvelopeRotated = 138,
                    PrintMediaSize_Prc16K = 139,
                    PrintMediaSize_Prc16KRotated = 140,
                    PrintMediaSize_Prc1Envelope = 141,
                    PrintMediaSize_Prc1EnvelopeRotated = 142,
                    PrintMediaSize_Prc2Envelope = 143,
                    PrintMediaSize_Prc2EnvelopeRotated = 144,
                    PrintMediaSize_Prc32K = 145,
                    PrintMediaSize_Prc32KBig = 146,
                    PrintMediaSize_Prc32KRotated = 147,
                    PrintMediaSize_Prc3Envelope = 148,
                    PrintMediaSize_Prc3EnvelopeRotated = 149,
                    PrintMediaSize_Prc4Envelope = 150,
                    PrintMediaSize_Prc4EnvelopeRotated = 151,
                    PrintMediaSize_Prc5Envelope = 152,
                    PrintMediaSize_Prc5EnvelopeRotated = 153,
                    PrintMediaSize_Prc6Envelope = 154,
                    PrintMediaSize_Prc6EnvelopeRotated = 155,
                    PrintMediaSize_Prc7Envelope = 156,
                    PrintMediaSize_Prc7EnvelopeRotated = 157,
                    PrintMediaSize_Prc8Envelope = 158,
                    PrintMediaSize_Prc8EnvelopeRotated = 159,
                    PrintMediaSize_Prc9Envelope = 160,
                    PrintMediaSize_Prc9EnvelopeRotated = 161,
                    PrintMediaSize_Roll04Inch = 162,
                    PrintMediaSize_Roll06Inch = 163,
                    PrintMediaSize_Roll08Inch = 164,
                    PrintMediaSize_Roll12Inch = 165,
                    PrintMediaSize_Roll15Inch = 166,
                    PrintMediaSize_Roll18Inch = 167,
                    PrintMediaSize_Roll22Inch = 168,
                    PrintMediaSize_Roll24Inch = 169,
                    PrintMediaSize_Roll30Inch = 170,
                    PrintMediaSize_Roll36Inch = 171,
                    PrintMediaSize_Roll54Inch = 172,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintMediaType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintMediaType : int
                {
                    PrintMediaType_Default = 0,
                    PrintMediaType_NotAvailable = 1,
                    PrintMediaType_PrinterCustom = 2,
                    PrintMediaType_AutoSelect = 3,
                    PrintMediaType_Archival = 4,
                    PrintMediaType_BackPrintFilm = 5,
                    PrintMediaType_Bond = 6,
                    PrintMediaType_CardStock = 7,
                    PrintMediaType_Continuous = 8,
                    PrintMediaType_EnvelopePlain = 9,
                    PrintMediaType_EnvelopeWindow = 10,
                    PrintMediaType_Fabric = 11,
                    PrintMediaType_HighResolution = 12,
                    PrintMediaType_Label = 13,
                    PrintMediaType_MultiLayerForm = 14,
                    PrintMediaType_MultiPartForm = 15,
                    PrintMediaType_Photographic = 16,
                    PrintMediaType_PhotographicFilm = 17,
                    PrintMediaType_PhotographicGlossy = 18,
                    PrintMediaType_PhotographicHighGloss = 19,
                    PrintMediaType_PhotographicMatte = 20,
                    PrintMediaType_PhotographicSatin = 21,
                    PrintMediaType_PhotographicSemiGloss = 22,
                    PrintMediaType_Plain = 23,
                    PrintMediaType_Screen = 24,
                    PrintMediaType_ScreenPaged = 25,
                    PrintMediaType_Stationery = 26,
                    PrintMediaType_TabStockFull = 27,
                    PrintMediaType_TabStockPreCut = 28,
                    PrintMediaType_Transparency = 29,
                    PrintMediaType_TShirtTransfer = 30,
                    PrintMediaType_None = 31,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintOrientation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintOrientation : int
                {
                    PrintOrientation_Default = 0,
                    PrintOrientation_NotAvailable = 1,
                    PrintOrientation_PrinterCustom = 2,
                    PrintOrientation_Portrait = 3,
                    PrintOrientation_PortraitFlipped = 4,
                    PrintOrientation_Landscape = 5,
                    PrintOrientation_LandscapeFlipped = 6,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintQuality : int
                {
                    PrintQuality_Default = 0,
                    PrintQuality_NotAvailable = 1,
                    PrintQuality_PrinterCustom = 2,
                    PrintQuality_Automatic = 3,
                    PrintQuality_Draft = 4,
                    PrintQuality_Fax = 5,
                    PrintQuality_High = 6,
                    PrintQuality_Normal = 7,
                    PrintQuality_Photographic = 8,
                    PrintQuality_Text = 9,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintStaple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintStaple : int
                {
                    PrintStaple_Default = 0,
                    PrintStaple_NotAvailable = 1,
                    PrintStaple_PrinterCustom = 2,
                    PrintStaple_None = 3,
                    PrintStaple_StapleTopLeft = 4,
                    PrintStaple_StapleTopRight = 5,
                    PrintStaple_StapleBottomLeft = 6,
                    PrintStaple_StapleBottomRight = 7,
                    PrintStaple_StapleDualLeft = 8,
                    PrintStaple_StapleDualRight = 9,
                    PrintStaple_StapleDualTop = 10,
                    PrintStaple_StapleDualBottom = 11,
                    PrintStaple_SaddleStitch = 12,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTaskCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [v1_enum, contract] */
                enum PrintTaskCompletion : int
                {
                    PrintTaskCompletion_Abandoned = 0,
                    PrintTaskCompletion_Canceled = 1,
                    PrintTaskCompletion_Failed = 2,
                    PrintTaskCompletion_Submitted = 3,
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintPageDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [contract] */
                struct PrintPageDescription
                {
                    ABI::Windows::Foundation::Size PageSize;
                    ABI::Windows::Foundation::Rect ImageableRect;
                    UINT32 DpiX;
                    UINT32 DpiY;
                };
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Graphics.Printing.PrintTaskSourceRequestedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("6C109FA8-5CB6-4B3A-8663-F39CB02DC9B4"), contract] */
                MIDL_INTERFACE("6C109FA8-5CB6-4B3A-8663-F39CB02DC9B4")
                IPrintTaskSourceRequestedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedArgs * args
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskSourceRequestedHandler=_uuidof(IPrintTaskSourceRequestedHandler);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintDocumentSource[] = L"Windows.Graphics.Printing.IPrintDocumentSource";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("DEDC0C30-F1EB-47DF-AAE6-ED5427511F01"), contract] */
                MIDL_INTERFACE("DEDC0C30-F1EB-47DF-AAE6-ED5427511F01")
                IPrintDocumentSource : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintDocumentSource=_uuidof(IPrintDocumentSource);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManager[] = L"Windows.Graphics.Printing.IPrintManager";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("FF2A9694-8C99-44FD-AE4A-19D9AA9A0F0A"), exclusiveto, contract] */
                MIDL_INTERFACE("FF2A9694-8C99-44FD-AE4A-19D9AA9A0F0A")
                IPrintManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PrintTaskRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PrintTaskRequested(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintManager=_uuidof(IPrintManager);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManagerStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic[] = L"Windows.Graphics.Printing.IPrintManagerStatic";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("58185DCD-E634-4654-84F0-E0152A8217AC"), exclusiveto, contract] */
                MIDL_INTERFACE("58185DCD-E634-4654-84F0-E0152A8217AC")
                IPrintManagerStatic : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintManager * * printingManager
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowPrintUIAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintManagerStatic=_uuidof(IPrintManagerStatic);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManagerStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic2[] = L"Windows.Graphics.Printing.IPrintManagerStatic2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("35A99955-E6AB-4139-9ABD-B86A729B3598"), exclusiveto, contract] */
                MIDL_INTERFACE("35A99955-E6AB-4139-9ABD-B86A729B3598")
                IPrintManagerStatic2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintManagerStatic2=_uuidof(IPrintManagerStatic2);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintPageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintPageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageInfo[] = L"Windows.Graphics.Printing.IPrintPageInfo";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("DD4BE9C9-A6A1-4ADA-930E-DA872A4F23D3"), exclusiveto, contract] */
                MIDL_INTERFACE("DD4BE9C9-A6A1-4ADA-930E-DA872A4F23D3")
                IPrintPageInfo : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MediaSize(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintMediaSize value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintMediaSize * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageSize(
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DpiX(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiX(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DpiY(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DpiY(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintOrientation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintOrientation * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintPageInfo=_uuidof(IPrintPageInfo);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask[] = L"Windows.Graphics.Printing.IPrintTask";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("61D80247-6CF6-4FAD-84E2-A5E82E2D4CEB"), exclusiveto, contract] */
                MIDL_INTERFACE("61D80247-6CF6-4FAD-84E2-A5E82E2D4CEB")
                IPrintTask : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintDocumentSource * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Previewing(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Previewing(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Submitting(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Submitting(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Progressing(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Progressing(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Completed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Completed(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTask=_uuidof(IPrintTask);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTask2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask2[] = L"Windows.Graphics.Printing.IPrintTask2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("36234877-3E53-4D9D-8F5E-316AC8DEDAE1"), exclusiveto, contract] */
                MIDL_INTERFACE("36234877-3E53-4D9D-8F5E-316AC8DEDAE1")
                IPrintTask2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPreviewEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPreviewEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTask2=_uuidof(IPrintTask2);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("5BCD34AF-24E9-4C10-8D07-14C346BA3FCE"), exclusiveto, contract] */
                MIDL_INTERFACE("5BCD34AF-24E9-4C10-8D07-14C346BA3FCE")
                IPrintTaskCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Completion(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintTaskCompletion * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskCompletedEventArgs=_uuidof(IPrintTaskCompletedEventArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptions[] = L"Windows.Graphics.Printing.IPrintTaskOptions";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("5A0A66BB-D289-41BB-96DD-57E28338AE3F"), exclusiveto, contract] */
                MIDL_INTERFACE("5A0A66BB-D289-41BB-96DD-57E28338AE3F")
                IPrintTaskOptions : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bordering(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintBordering value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bordering(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintBordering * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPagePrintTicket(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::IPrintPageInfo * printPageInfo,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * printTicket
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskOptions=_uuidof(IPrintTaskOptions);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCore[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCore";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("1BDBB474-4ED1-41EB-BE3C-72D18ED67337"), contract] */
                MIDL_INTERFACE("1BDBB474-4ED1-41EB-BE3C-72D18ED67337")
                IPrintTaskOptionsCore : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPageDescription(
                        /* [in] */UINT32 jobPageNumber,
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintPageDescription * description
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskOptionsCore=_uuidof(IPrintTaskOptionsCore);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("C1B71832-9E93-4E55-814B-3326A59EFCE1"), contract] */
                MIDL_INTERFACE("C1B71832-9E93-4E55-814B-3326A59EFCE1")
                IPrintTaskOptionsCoreProperties : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MediaSize(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintMediaSize value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintMediaSize * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MediaType(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintMediaType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaType(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintMediaType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintOrientation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintOrientation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PrintQuality(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintQuality value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrintQuality(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintQuality * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ColorMode(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintColorMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintColorMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Duplex(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintDuplex value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duplex(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintDuplex * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Collation(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintCollation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Collation(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintCollation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Staple(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintStaple value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Staple(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintStaple * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HolePunch(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintHolePunch value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HolePunch(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintHolePunch * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Binding(
                        /* [in] */ABI::Windows::Graphics::Printing::PrintBinding value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Binding(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Printing::PrintBinding * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinCopies(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxCopies(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NumberOfCopies(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumberOfCopies(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskOptionsCoreProperties=_uuidof(IPrintTaskOptionsCoreProperties);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("62E69E23-9A1E-4336-B74F-3CC7F4CFF709"), contract] */
                MIDL_INTERFACE("62E69E23-9A1E-4336-B74F-3CC7F4CFF709")
                IPrintTaskOptionsCoreUIConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayedOptions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskOptionsCoreUIConfiguration=_uuidof(IPrintTaskOptionsCoreUIConfiguration);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskProgressingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskProgressingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskProgressingEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("810CD3CB-B410-4282-A073-5AC378234174"), exclusiveto, contract] */
                MIDL_INTERFACE("810CD3CB-B410-4282-A073-5AC378234174")
                IPrintTaskProgressingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentPageCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskProgressingEventArgs=_uuidof(IPrintTaskProgressingEventArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequest[] = L"Windows.Graphics.Printing.IPrintTaskRequest";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("6FF61E2E-2722-4240-A67C-F364849A17F3"), exclusiveto, contract] */
                MIDL_INTERFACE("6FF61E2E-2722-4240-A67C-F364849A17F3")
                IPrintTaskRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreatePrintTask(
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedHandler  * handler,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTask * * task
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskRequestedDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskRequest=_uuidof(IPrintTaskRequest);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskRequestedDeferral";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("CFEFB3F0-CE3E-42C7-9496-64800C622C44"), exclusiveto, contract] */
                MIDL_INTERFACE("CFEFB3F0-CE3E-42C7-9496-64800C622C44")
                IPrintTaskRequestedDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskRequestedDeferral=_uuidof(IPrintTaskRequestedDeferral);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("D0AFF924-A31B-454C-A7B6-5D0CC522FC16"), exclusiveto, contract] */
                MIDL_INTERFACE("D0AFF924-A31B-454C-A7B6-5D0CC522FC16")
                IPrintTaskRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskRequest * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskRequestedEventArgs=_uuidof(IPrintTaskRequestedEventArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskSourceRequestedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("F9F067BE-F456-41F0-9C98-5CE73E851410"), exclusiveto, contract] */
                MIDL_INTERFACE("F9F067BE-F456-41F0-9C98-5CE73E851410")
                IPrintTaskSourceRequestedArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetSource(
                        /* [in] */__RPC__in_opt ABI::Windows::Graphics::Printing::IPrintDocumentSource * source
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskSourceRequestedDeferral * * deferral
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskSourceRequestedArgs=_uuidof(IPrintTaskSourceRequestedArgs);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("4A1560D1-6992-4D9D-8555-4CA4563FB166"), exclusiveto, contract] */
                MIDL_INTERFACE("4A1560D1-6992-4D9D-8555-4CA4563FB166")
                IPrintTaskSourceRequestedDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskSourceRequestedDeferral=_uuidof(IPrintTaskSourceRequestedDeferral);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport[] = L"Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("295D70C0-C2CB-4B7D-B0EA-93095091A220"), exclusiveto, contract] */
                MIDL_INTERFACE("295D70C0-C2CB-4B7D-B0EA-93095091A220")
                IPrintTaskTargetDeviceSupport : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPrinterTargetEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPrinterTargetEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Is3DManufacturingTargetEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Is3DManufacturingTargetEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPrintTaskTargetDeviceSupport=_uuidof(IPrintTaskTargetDeviceSupport);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("B4483D26-0DD0-4CD4-BAFF-930FC7D6A574"), exclusiveto, contract] */
                MIDL_INTERFACE("B4483D26-0DD0-4CD4-BAFF-930FC7D6A574")
                IStandardPrintTaskOptionsStatic : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaSize(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrintQuality(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorMode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duplex(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Collation(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Staple(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HolePunch(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Binding(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Copies(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NUp(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputBin(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStandardPrintTaskOptionsStatic=_uuidof(IStandardPrintTaskOptionsStatic);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2";
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                /* [object, uuid("3BE38BF4-7A44-4269-9A52-81261E289EE9"), exclusiveto, contract] */
                MIDL_INTERFACE("3BE38BF4-7A44-4269-9A52-81261E289EE9")
                IStandardPrintTaskOptionsStatic2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bordering(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStandardPrintTaskOptionsStatic2=_uuidof(IStandardPrintTaskOptionsStatic2);
                
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.PrintManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.IPrintManagerStatic2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Printing.IPrintManagerStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintManager_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintManager[] = L"Windows.Graphics.Printing.PrintManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintPageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintPageInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintPageInfo_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintPageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintPageInfo[] = L"Windows.Graphics.Printing.PrintPageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.PrintTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTask ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport
 *    Windows.Graphics.Printing.IPrintTask2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTask_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTask[] = L"Windows.Graphics.Printing.PrintTask";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskOptionsCore ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *    Windows.Graphics.Printing.IPrintTaskOptions
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskOptions_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskOptions[] = L"Windows.Graphics.Printing.PrintTaskOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskProgressingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskProgressingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskProgressingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskProgressingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.PrintTaskProgressingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequest[] = L"Windows.Graphics.Printing.PrintTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequestedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskSourceRequestedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Graphics_Printing_StandardPrintTaskOptions_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_StandardPrintTaskOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_StandardPrintTaskOptions[] = L"Windows.Graphics.Printing.StandardPrintTaskOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs_INTERFACE_DEFINED__

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



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple;


typedef enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion;


typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription;











































/*
 *
 * Struct Windows.Graphics.Printing.PrintBinding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding
{
    PrintBinding_Default = 0,
    PrintBinding_NotAvailable = 1,
    PrintBinding_PrinterCustom = 2,
    PrintBinding_None = 3,
    PrintBinding_Bale = 4,
    PrintBinding_BindBottom = 5,
    PrintBinding_BindLeft = 6,
    PrintBinding_BindRight = 7,
    PrintBinding_BindTop = 8,
    PrintBinding_Booklet = 9,
    PrintBinding_EdgeStitchBottom = 10,
    PrintBinding_EdgeStitchLeft = 11,
    PrintBinding_EdgeStitchRight = 12,
    PrintBinding_EdgeStitchTop = 13,
    PrintBinding_Fold = 14,
    PrintBinding_JogOffset = 15,
    PrintBinding_Trim = 16,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintBordering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering
{
    PrintBordering_Default = 0,
    PrintBordering_NotAvailable = 1,
    PrintBordering_PrinterCustom = 2,
    PrintBordering_Bordered = 3,
    PrintBordering_Borderless = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Graphics.Printing.PrintCollation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation
{
    PrintCollation_Default = 0,
    PrintCollation_NotAvailable = 1,
    PrintCollation_PrinterCustom = 2,
    PrintCollation_Collated = 3,
    PrintCollation_Uncollated = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintColorMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode
{
    PrintColorMode_Default = 0,
    PrintColorMode_NotAvailable = 1,
    PrintColorMode_PrinterCustom = 2,
    PrintColorMode_Color = 3,
    PrintColorMode_Grayscale = 4,
    PrintColorMode_Monochrome = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintDuplex
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex
{
    PrintDuplex_Default = 0,
    PrintDuplex_NotAvailable = 1,
    PrintDuplex_PrinterCustom = 2,
    PrintDuplex_OneSided = 3,
    PrintDuplex_TwoSidedShortEdge = 4,
    PrintDuplex_TwoSidedLongEdge = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintHolePunch
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch
{
    PrintHolePunch_Default = 0,
    PrintHolePunch_NotAvailable = 1,
    PrintHolePunch_PrinterCustom = 2,
    PrintHolePunch_None = 3,
    PrintHolePunch_LeftEdge = 4,
    PrintHolePunch_RightEdge = 5,
    PrintHolePunch_TopEdge = 6,
    PrintHolePunch_BottomEdge = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintMediaSize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize
{
    PrintMediaSize_Default = 0,
    PrintMediaSize_NotAvailable = 1,
    PrintMediaSize_PrinterCustom = 2,
    PrintMediaSize_BusinessCard = 3,
    PrintMediaSize_CreditCard = 4,
    PrintMediaSize_IsoA0 = 5,
    PrintMediaSize_IsoA1 = 6,
    PrintMediaSize_IsoA10 = 7,
    PrintMediaSize_IsoA2 = 8,
    PrintMediaSize_IsoA3 = 9,
    PrintMediaSize_IsoA3Extra = 10,
    PrintMediaSize_IsoA3Rotated = 11,
    PrintMediaSize_IsoA4 = 12,
    PrintMediaSize_IsoA4Extra = 13,
    PrintMediaSize_IsoA4Rotated = 14,
    PrintMediaSize_IsoA5 = 15,
    PrintMediaSize_IsoA5Extra = 16,
    PrintMediaSize_IsoA5Rotated = 17,
    PrintMediaSize_IsoA6 = 18,
    PrintMediaSize_IsoA6Rotated = 19,
    PrintMediaSize_IsoA7 = 20,
    PrintMediaSize_IsoA8 = 21,
    PrintMediaSize_IsoA9 = 22,
    PrintMediaSize_IsoB0 = 23,
    PrintMediaSize_IsoB1 = 24,
    PrintMediaSize_IsoB10 = 25,
    PrintMediaSize_IsoB2 = 26,
    PrintMediaSize_IsoB3 = 27,
    PrintMediaSize_IsoB4 = 28,
    PrintMediaSize_IsoB4Envelope = 29,
    PrintMediaSize_IsoB5Envelope = 30,
    PrintMediaSize_IsoB5Extra = 31,
    PrintMediaSize_IsoB7 = 32,
    PrintMediaSize_IsoB8 = 33,
    PrintMediaSize_IsoB9 = 34,
    PrintMediaSize_IsoC0 = 35,
    PrintMediaSize_IsoC1 = 36,
    PrintMediaSize_IsoC10 = 37,
    PrintMediaSize_IsoC2 = 38,
    PrintMediaSize_IsoC3 = 39,
    PrintMediaSize_IsoC3Envelope = 40,
    PrintMediaSize_IsoC4 = 41,
    PrintMediaSize_IsoC4Envelope = 42,
    PrintMediaSize_IsoC5 = 43,
    PrintMediaSize_IsoC5Envelope = 44,
    PrintMediaSize_IsoC6 = 45,
    PrintMediaSize_IsoC6C5Envelope = 46,
    PrintMediaSize_IsoC6Envelope = 47,
    PrintMediaSize_IsoC7 = 48,
    PrintMediaSize_IsoC8 = 49,
    PrintMediaSize_IsoC9 = 50,
    PrintMediaSize_IsoDLEnvelope = 51,
    PrintMediaSize_IsoDLEnvelopeRotated = 52,
    PrintMediaSize_IsoSRA3 = 53,
    PrintMediaSize_Japan2LPhoto = 54,
    PrintMediaSize_JapanChou3Envelope = 55,
    PrintMediaSize_JapanChou3EnvelopeRotated = 56,
    PrintMediaSize_JapanChou4Envelope = 57,
    PrintMediaSize_JapanChou4EnvelopeRotated = 58,
    PrintMediaSize_JapanDoubleHagakiPostcard = 59,
    PrintMediaSize_JapanDoubleHagakiPostcardRotated = 60,
    PrintMediaSize_JapanHagakiPostcard = 61,
    PrintMediaSize_JapanHagakiPostcardRotated = 62,
    PrintMediaSize_JapanKaku2Envelope = 63,
    PrintMediaSize_JapanKaku2EnvelopeRotated = 64,
    PrintMediaSize_JapanKaku3Envelope = 65,
    PrintMediaSize_JapanKaku3EnvelopeRotated = 66,
    PrintMediaSize_JapanLPhoto = 67,
    PrintMediaSize_JapanQuadrupleHagakiPostcard = 68,
    PrintMediaSize_JapanYou1Envelope = 69,
    PrintMediaSize_JapanYou2Envelope = 70,
    PrintMediaSize_JapanYou3Envelope = 71,
    PrintMediaSize_JapanYou4Envelope = 72,
    PrintMediaSize_JapanYou4EnvelopeRotated = 73,
    PrintMediaSize_JapanYou6Envelope = 74,
    PrintMediaSize_JapanYou6EnvelopeRotated = 75,
    PrintMediaSize_JisB0 = 76,
    PrintMediaSize_JisB1 = 77,
    PrintMediaSize_JisB10 = 78,
    PrintMediaSize_JisB2 = 79,
    PrintMediaSize_JisB3 = 80,
    PrintMediaSize_JisB4 = 81,
    PrintMediaSize_JisB4Rotated = 82,
    PrintMediaSize_JisB5 = 83,
    PrintMediaSize_JisB5Rotated = 84,
    PrintMediaSize_JisB6 = 85,
    PrintMediaSize_JisB6Rotated = 86,
    PrintMediaSize_JisB7 = 87,
    PrintMediaSize_JisB8 = 88,
    PrintMediaSize_JisB9 = 89,
    PrintMediaSize_NorthAmerica10x11 = 90,
    PrintMediaSize_NorthAmerica10x12 = 91,
    PrintMediaSize_NorthAmerica10x14 = 92,
    PrintMediaSize_NorthAmerica11x17 = 93,
    PrintMediaSize_NorthAmerica14x17 = 94,
    PrintMediaSize_NorthAmerica4x6 = 95,
    PrintMediaSize_NorthAmerica4x8 = 96,
    PrintMediaSize_NorthAmerica5x7 = 97,
    PrintMediaSize_NorthAmerica8x10 = 98,
    PrintMediaSize_NorthAmerica9x11 = 99,
    PrintMediaSize_NorthAmericaArchitectureASheet = 100,
    PrintMediaSize_NorthAmericaArchitectureBSheet = 101,
    PrintMediaSize_NorthAmericaArchitectureCSheet = 102,
    PrintMediaSize_NorthAmericaArchitectureDSheet = 103,
    PrintMediaSize_NorthAmericaArchitectureESheet = 104,
    PrintMediaSize_NorthAmericaCSheet = 105,
    PrintMediaSize_NorthAmericaDSheet = 106,
    PrintMediaSize_NorthAmericaESheet = 107,
    PrintMediaSize_NorthAmericaExecutive = 108,
    PrintMediaSize_NorthAmericaGermanLegalFanfold = 109,
    PrintMediaSize_NorthAmericaGermanStandardFanfold = 110,
    PrintMediaSize_NorthAmericaLegal = 111,
    PrintMediaSize_NorthAmericaLegalExtra = 112,
    PrintMediaSize_NorthAmericaLetter = 113,
    PrintMediaSize_NorthAmericaLetterExtra = 114,
    PrintMediaSize_NorthAmericaLetterPlus = 115,
    PrintMediaSize_NorthAmericaLetterRotated = 116,
    PrintMediaSize_NorthAmericaMonarchEnvelope = 117,
    PrintMediaSize_NorthAmericaNote = 118,
    PrintMediaSize_NorthAmericaNumber10Envelope = 119,
    PrintMediaSize_NorthAmericaNumber10EnvelopeRotated = 120,
    PrintMediaSize_NorthAmericaNumber11Envelope = 121,
    PrintMediaSize_NorthAmericaNumber12Envelope = 122,
    PrintMediaSize_NorthAmericaNumber14Envelope = 123,
    PrintMediaSize_NorthAmericaNumber9Envelope = 124,
    PrintMediaSize_NorthAmericaPersonalEnvelope = 125,
    PrintMediaSize_NorthAmericaQuarto = 126,
    PrintMediaSize_NorthAmericaStatement = 127,
    PrintMediaSize_NorthAmericaSuperA = 128,
    PrintMediaSize_NorthAmericaSuperB = 129,
    PrintMediaSize_NorthAmericaTabloid = 130,
    PrintMediaSize_NorthAmericaTabloidExtra = 131,
    PrintMediaSize_OtherMetricA3Plus = 132,
    PrintMediaSize_OtherMetricA4Plus = 133,
    PrintMediaSize_OtherMetricFolio = 134,
    PrintMediaSize_OtherMetricInviteEnvelope = 135,
    PrintMediaSize_OtherMetricItalianEnvelope = 136,
    PrintMediaSize_Prc10Envelope = 137,
    PrintMediaSize_Prc10EnvelopeRotated = 138,
    PrintMediaSize_Prc16K = 139,
    PrintMediaSize_Prc16KRotated = 140,
    PrintMediaSize_Prc1Envelope = 141,
    PrintMediaSize_Prc1EnvelopeRotated = 142,
    PrintMediaSize_Prc2Envelope = 143,
    PrintMediaSize_Prc2EnvelopeRotated = 144,
    PrintMediaSize_Prc32K = 145,
    PrintMediaSize_Prc32KBig = 146,
    PrintMediaSize_Prc32KRotated = 147,
    PrintMediaSize_Prc3Envelope = 148,
    PrintMediaSize_Prc3EnvelopeRotated = 149,
    PrintMediaSize_Prc4Envelope = 150,
    PrintMediaSize_Prc4EnvelopeRotated = 151,
    PrintMediaSize_Prc5Envelope = 152,
    PrintMediaSize_Prc5EnvelopeRotated = 153,
    PrintMediaSize_Prc6Envelope = 154,
    PrintMediaSize_Prc6EnvelopeRotated = 155,
    PrintMediaSize_Prc7Envelope = 156,
    PrintMediaSize_Prc7EnvelopeRotated = 157,
    PrintMediaSize_Prc8Envelope = 158,
    PrintMediaSize_Prc8EnvelopeRotated = 159,
    PrintMediaSize_Prc9Envelope = 160,
    PrintMediaSize_Prc9EnvelopeRotated = 161,
    PrintMediaSize_Roll04Inch = 162,
    PrintMediaSize_Roll06Inch = 163,
    PrintMediaSize_Roll08Inch = 164,
    PrintMediaSize_Roll12Inch = 165,
    PrintMediaSize_Roll15Inch = 166,
    PrintMediaSize_Roll18Inch = 167,
    PrintMediaSize_Roll22Inch = 168,
    PrintMediaSize_Roll24Inch = 169,
    PrintMediaSize_Roll30Inch = 170,
    PrintMediaSize_Roll36Inch = 171,
    PrintMediaSize_Roll54Inch = 172,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintMediaType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType
{
    PrintMediaType_Default = 0,
    PrintMediaType_NotAvailable = 1,
    PrintMediaType_PrinterCustom = 2,
    PrintMediaType_AutoSelect = 3,
    PrintMediaType_Archival = 4,
    PrintMediaType_BackPrintFilm = 5,
    PrintMediaType_Bond = 6,
    PrintMediaType_CardStock = 7,
    PrintMediaType_Continuous = 8,
    PrintMediaType_EnvelopePlain = 9,
    PrintMediaType_EnvelopeWindow = 10,
    PrintMediaType_Fabric = 11,
    PrintMediaType_HighResolution = 12,
    PrintMediaType_Label = 13,
    PrintMediaType_MultiLayerForm = 14,
    PrintMediaType_MultiPartForm = 15,
    PrintMediaType_Photographic = 16,
    PrintMediaType_PhotographicFilm = 17,
    PrintMediaType_PhotographicGlossy = 18,
    PrintMediaType_PhotographicHighGloss = 19,
    PrintMediaType_PhotographicMatte = 20,
    PrintMediaType_PhotographicSatin = 21,
    PrintMediaType_PhotographicSemiGloss = 22,
    PrintMediaType_Plain = 23,
    PrintMediaType_Screen = 24,
    PrintMediaType_ScreenPaged = 25,
    PrintMediaType_Stationery = 26,
    PrintMediaType_TabStockFull = 27,
    PrintMediaType_TabStockPreCut = 28,
    PrintMediaType_Transparency = 29,
    PrintMediaType_TShirtTransfer = 30,
    PrintMediaType_None = 31,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintOrientation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation
{
    PrintOrientation_Default = 0,
    PrintOrientation_NotAvailable = 1,
    PrintOrientation_PrinterCustom = 2,
    PrintOrientation_Portrait = 3,
    PrintOrientation_PortraitFlipped = 4,
    PrintOrientation_Landscape = 5,
    PrintOrientation_LandscapeFlipped = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintQuality
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality
{
    PrintQuality_Default = 0,
    PrintQuality_NotAvailable = 1,
    PrintQuality_PrinterCustom = 2,
    PrintQuality_Automatic = 3,
    PrintQuality_Draft = 4,
    PrintQuality_Fax = 5,
    PrintQuality_High = 6,
    PrintQuality_Normal = 7,
    PrintQuality_Photographic = 8,
    PrintQuality_Text = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintStaple
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple
{
    PrintStaple_Default = 0,
    PrintStaple_NotAvailable = 1,
    PrintStaple_PrinterCustom = 2,
    PrintStaple_None = 3,
    PrintStaple_StapleTopLeft = 4,
    PrintStaple_StapleTopRight = 5,
    PrintStaple_StapleBottomLeft = 6,
    PrintStaple_StapleBottomRight = 7,
    PrintStaple_StapleDualLeft = 8,
    PrintStaple_StapleDualRight = 9,
    PrintStaple_StapleDualTop = 10,
    PrintStaple_StapleDualBottom = 11,
    PrintStaple_SaddleStitch = 12,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintTaskCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion
{
    PrintTaskCompletion_Abandoned = 0,
    PrintTaskCompletion_Canceled = 1,
    PrintTaskCompletion_Failed = 2,
    PrintTaskCompletion_Submitted = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Graphics.Printing.PrintPageDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription
{
    __x_ABI_CWindows_CFoundation_CSize PageSize;
    __x_ABI_CWindows_CFoundation_CRect ImageableRect;
    UINT32 DpiX;
    UINT32 DpiY;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Graphics.Printing.PrintTaskSourceRequestedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__
/* [object, uuid("6C109FA8-5CB6-4B3A-8663-F39CB02DC9B4"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * args
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_Invoke(This,args) \
    ( (This)->lpVtbl->Invoke(This,args) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintDocumentSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintDocumentSource[] = L"Windows.Graphics.Printing.IPrintDocumentSource";
/* [object, uuid("DEDC0C30-F1EB-47DF-AAE6-ED5427511F01"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManager[] = L"Windows.Graphics.Printing.IPrintManager";
/* [object, uuid("FF2A9694-8C99-44FD-AE4A-19D9AA9A0F0A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PrintTaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintManager_Windows__CGraphics__CPrinting__CPrintTaskRequestedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PrintTaskRequested )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_add_PrintTaskRequested(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_PrintTaskRequested(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_remove_PrintTaskRequested(This,eventCookie) \
    ( (This)->lpVtbl->remove_PrintTaskRequested(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManagerStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic[] = L"Windows.Graphics.Printing.IPrintManagerStatic";
/* [object, uuid("58185DCD-E634-4654-84F0-E0152A8217AC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManager * * printingManager
        );
    HRESULT ( STDMETHODCALLTYPE *ShowPrintUIAsync )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_GetForCurrentView(This,printingManager) \
    ( (This)->lpVtbl->GetForCurrentView(This,printingManager) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_ShowPrintUIAsync(This,operation) \
    ( (This)->lpVtbl->ShowPrintUIAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintManagerStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintManagerStatic2[] = L"Windows.Graphics.Printing.IPrintManagerStatic2";
/* [object, uuid("35A99955-E6AB-4139-9ABD-B86A729B3598"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2 * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_IsSupported(This,result) \
    ( (This)->lpVtbl->IsSupported(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintManagerStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintPageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintPageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintPageInfo[] = L"Windows.Graphics.Printing.IPrintPageInfo";
/* [object, uuid("DD4BE9C9-A6A1-4ADA-930E-DA872A4F23D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DpiX )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DpiY )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_put_MediaSize(This,value) \
    ( (This)->lpVtbl->put_MediaSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_get_MediaSize(This,value) \
    ( (This)->lpVtbl->get_MediaSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_put_PageSize(This,value) \
    ( (This)->lpVtbl->put_PageSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_get_PageSize(This,value) \
    ( (This)->lpVtbl->get_PageSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_put_DpiX(This,value) \
    ( (This)->lpVtbl->put_DpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_get_DpiX(This,value) \
    ( (This)->lpVtbl->get_DpiX(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_put_DpiY(This,value) \
    ( (This)->lpVtbl->put_DpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_get_DpiY(This,value) \
    ( (This)->lpVtbl->get_DpiY(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask[] = L"Windows.Graphics.Printing.IPrintTask";
/* [object, uuid("61D80247-6CF6-4FAD-84E2-A5E82E2D4CEB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Previewing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Previewing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Submitting )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Progressing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskProgressingEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Progressing )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CPrinting__CPrintTask_Windows__CGraphics__CPrinting__CPrintTaskCompletedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_add_Previewing(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_Previewing(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_remove_Previewing(This,eventCookie) \
    ( (This)->lpVtbl->remove_Previewing(This,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_add_Submitting(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_Submitting(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_remove_Submitting(This,eventCookie) \
    ( (This)->lpVtbl->remove_Submitting(This,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_add_Progressing(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_Progressing(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_remove_Progressing(This,eventCookie) \
    ( (This)->lpVtbl->remove_Progressing(This,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_add_Completed(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_Completed(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_remove_Completed(This,eventCookie) \
    ( (This)->lpVtbl->remove_Completed(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTask2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTask2[] = L"Windows.Graphics.Printing.IPrintTask2";
/* [object, uuid("36234877-3E53-4D9D-8F5E-316AC8DEDAE1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPreviewEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPreviewEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_put_IsPreviewEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPreviewEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_get_IsPreviewEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPreviewEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskCompletedEventArgs";
/* [object, uuid("5BCD34AF-24E9-4C10-8D07-14C346BA3FCE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintTaskCompletion * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_get_Completion(This,value) \
    ( (This)->lpVtbl->get_Completion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptions[] = L"Windows.Graphics.Printing.IPrintTaskOptions";
/* [object, uuid("5A0A66BB-D289-41BB-96DD-57E28338AE3F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintBordering * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPagePrintTicket )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintPageInfo * printPageInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * printTicket
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_put_Bordering(This,value) \
    ( (This)->lpVtbl->put_Bordering(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_get_Bordering(This,value) \
    ( (This)->lpVtbl->get_Bordering(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_GetPagePrintTicket(This,printPageInfo,printTicket) \
    ( (This)->lpVtbl->GetPagePrintTicket(This,printPageInfo,printTicket) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCore[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCore";
/* [object, uuid("1BDBB474-4ED1-41EB-BE3C-72D18ED67337"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPageDescription )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * This,
        /* [in] */UINT32 jobPageNumber,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintPageDescription * description
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_GetPageDescription(This,jobPageNumber,description) \
    ( (This)->lpVtbl->GetPageDescription(This,jobPageNumber,description) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreProperties[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties";
/* [object, uuid("C1B71832-9E93-4E55-814B-3326A59EFCE1"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintMediaType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintOrientation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintQuality * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintColorMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintDuplex * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintCollation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintStaple * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintHolePunch * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CPrinting_CPrintBinding * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NumberOfCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumberOfCopies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCorePropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_MediaSize(This,value) \
    ( (This)->lpVtbl->put_MediaSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_MediaSize(This,value) \
    ( (This)->lpVtbl->get_MediaSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_MediaType(This,value) \
    ( (This)->lpVtbl->put_MediaType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_MediaType(This,value) \
    ( (This)->lpVtbl->get_MediaType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_PrintQuality(This,value) \
    ( (This)->lpVtbl->put_PrintQuality(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_PrintQuality(This,value) \
    ( (This)->lpVtbl->get_PrintQuality(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_ColorMode(This,value) \
    ( (This)->lpVtbl->put_ColorMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_ColorMode(This,value) \
    ( (This)->lpVtbl->get_ColorMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_Duplex(This,value) \
    ( (This)->lpVtbl->put_Duplex(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_Duplex(This,value) \
    ( (This)->lpVtbl->get_Duplex(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_Collation(This,value) \
    ( (This)->lpVtbl->put_Collation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_Collation(This,value) \
    ( (This)->lpVtbl->get_Collation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_Staple(This,value) \
    ( (This)->lpVtbl->put_Staple(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_Staple(This,value) \
    ( (This)->lpVtbl->get_Staple(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_HolePunch(This,value) \
    ( (This)->lpVtbl->put_HolePunch(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_HolePunch(This,value) \
    ( (This)->lpVtbl->get_HolePunch(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_Binding(This,value) \
    ( (This)->lpVtbl->put_Binding(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_Binding(This,value) \
    ( (This)->lpVtbl->get_Binding(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_MinCopies(This,value) \
    ( (This)->lpVtbl->get_MinCopies(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_MaxCopies(This,value) \
    ( (This)->lpVtbl->get_MaxCopies(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_put_NumberOfCopies(This,value) \
    ( (This)->lpVtbl->put_NumberOfCopies(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_get_NumberOfCopies(This,value) \
    ( (This)->lpVtbl->get_NumberOfCopies(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskOptionsCoreUIConfiguration[] = L"Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration";
/* [object, uuid("62E69E23-9A1E-4336-B74F-3CC7F4CFF709"), contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayedOptions )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_get_DisplayedOptions(This,value) \
    ( (This)->lpVtbl->get_DisplayedOptions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCoreUIConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskProgressingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskProgressingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskProgressingEventArgs";
/* [object, uuid("810CD3CB-B410-4282-A073-5AC378234174"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentPageCount )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_get_DocumentPageCount(This,value) \
    ( (This)->lpVtbl->get_DocumentPageCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskProgressingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequest[] = L"Windows.Graphics.Printing.IPrintTaskRequest";
/* [object, uuid("6FF61E2E-2722-4240-A67C-F364849A17F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePrintTask )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTask * * task
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_CreatePrintTask(This,title,handler,task) \
    ( (This)->lpVtbl->CreatePrintTask(This,title,handler,task) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskRequestedDeferral";
/* [object, uuid("CFEFB3F0-CE3E-42C7-9496-64800C622C44"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.IPrintTaskRequestedEventArgs";
/* [object, uuid("D0AFF924-A31B-454C-A7B6-5D0CC522FC16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskSourceRequestedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs";
/* [object, uuid("F9F067BE-F456-41F0-9C98-5CE73E851410"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * source
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_SetSource(This,source) \
    ( (This)->lpVtbl->SetSource(This,source) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral";
/* [object, uuid("4A1560D1-6992-4D9D-8555-4CA4563FB166"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskSourceRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.PrintTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IPrintTaskTargetDeviceSupport[] = L"Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport";
/* [object, uuid("295D70C0-C2CB-4B7D-B0EA-93095091A220"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPrinterTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPrinterTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Is3DManufacturingTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Is3DManufacturingTargetEnabled )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_put_IsPrinterTargetEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPrinterTargetEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_get_IsPrinterTargetEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPrinterTargetEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_put_Is3DManufacturingTargetEnabled(This,value) \
    ( (This)->lpVtbl->put_Is3DManufacturingTargetEnabled(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_get_Is3DManufacturingTargetEnabled(This,value) \
    ( (This)->lpVtbl->get_Is3DManufacturingTargetEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskTargetDeviceSupport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic";
/* [object, uuid("B4483D26-0DD0-4CD4-BAFF-930FC7D6A574"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaSize )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrintQuality )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorMode )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duplex )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Collation )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Staple )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HolePunch )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Binding )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Copies )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NUp )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputBin )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStaticVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_MediaSize(This,value) \
    ( (This)->lpVtbl->get_MediaSize(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_MediaType(This,value) \
    ( (This)->lpVtbl->get_MediaType(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_PrintQuality(This,value) \
    ( (This)->lpVtbl->get_PrintQuality(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_ColorMode(This,value) \
    ( (This)->lpVtbl->get_ColorMode(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Duplex(This,value) \
    ( (This)->lpVtbl->get_Duplex(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Collation(This,value) \
    ( (This)->lpVtbl->get_Collation(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Staple(This,value) \
    ( (This)->lpVtbl->get_Staple(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_HolePunch(This,value) \
    ( (This)->lpVtbl->get_HolePunch(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Binding(This,value) \
    ( (This)->lpVtbl->get_Binding(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_Copies(This,value) \
    ( (This)->lpVtbl->get_Copies(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_NUp(This,value) \
    ( (This)->lpVtbl->get_NUp(This,value) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_get_InputBin(This,value) \
    ( (This)->lpVtbl->get_InputBin(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Printing_IStandardPrintTaskOptionsStatic2[] = L"Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2";
/* [object, uuid("3BE38BF4-7A44-4269-9A52-81261E289EE9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bordering )(
        __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl;

interface __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_get_Bordering(This,value) \
    ( (This)->lpVtbl->get_Bordering(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2;
#endif /* !defined(____x_ABI_CWindows_CGraphics_CPrinting_CIStandardPrintTaskOptionsStatic2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.PrintManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.IPrintManagerStatic2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Printing.IPrintManagerStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintManager_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintManager[] = L"Windows.Graphics.Printing.PrintManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintPageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintPageInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintPageInfo_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintPageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintPageInfo[] = L"Windows.Graphics.Printing.PrintPageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Graphics.Printing.PrintTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTask ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskTargetDeviceSupport
 *    Windows.Graphics.Printing.IPrintTask2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTask_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTask[] = L"Windows.Graphics.Printing.PrintTask";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskCompletedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskOptionsCore ** Default Interface **
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreProperties
 *    Windows.Graphics.Printing.IPrintTaskOptionsCoreUIConfiguration
 *    Windows.Graphics.Printing.IPrintTaskOptions
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskOptions_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskOptions[] = L"Windows.Graphics.Printing.PrintTaskOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskProgressingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskProgressingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskProgressingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskProgressingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskProgressingEventArgs[] = L"Windows.Graphics.Printing.PrintTaskProgressingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequest_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequest[] = L"Windows.Graphics.Printing.PrintTaskRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequestedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskRequestedEventArgs[] = L"Windows.Graphics.Printing.PrintTaskRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskSourceRequestedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskSourceRequestedArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedArgs[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Graphics.Printing.IPrintTaskSourceRequestedDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_PrintTaskSourceRequestedDeferral[] = L"Windows.Graphics.Printing.PrintTaskSourceRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Graphics.Printing.StandardPrintTaskOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Graphics.Printing.IStandardPrintTaskOptionsStatic interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Graphics_Printing_StandardPrintTaskOptions_DEFINED
#define RUNTIMECLASS_Windows_Graphics_Printing_StandardPrintTaskOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Printing_StandardPrintTaskOptions[] = L"Windows.Graphics.Printing.StandardPrintTaskOptions";
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
#endif // __windows2Egraphics2Eprinting_p_h__

#endif // __windows2Egraphics2Eprinting_h__
