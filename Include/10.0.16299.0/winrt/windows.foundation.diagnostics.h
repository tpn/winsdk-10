/* Header file automatically generated from windows.foundation.diagnostics.idl */
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
#ifndef __windows2Efoundation2Ediagnostics_h__
#define __windows2Efoundation2Ediagnostics_h__
#ifndef __windows2Efoundation2Ediagnostics_p_h__
#define __windows2Efoundation2Ediagnostics_p_h__


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
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IAsyncCausalityTracerStatics;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics ABI::Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IErrorDetails;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails ABI::Windows::Foundation::Diagnostics::IErrorDetails

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IErrorDetailsStatics;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics ABI::Windows::Foundation::Diagnostics::IErrorDetailsStatics

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IErrorReportingSettings;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings ABI::Windows::Foundation::Diagnostics::IErrorReportingSettings

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IFileLoggingSession;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession ABI::Windows::Foundation::Diagnostics::IFileLoggingSession

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface IFileLoggingSessionFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory ABI::Windows::Foundation::Diagnostics::IFileLoggingSessionFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILogFileGeneratedEventArgs;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs ABI::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingActivity;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity ABI::Windows::Foundation::Diagnostics::ILoggingActivity

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingActivity2;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 ABI::Windows::Foundation::Diagnostics::ILoggingActivity2

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingActivityFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory ABI::Windows::Foundation::Diagnostics::ILoggingActivityFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannel;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel ABI::Windows::Foundation::Diagnostics::ILoggingChannel

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannel2;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 ABI::Windows::Foundation::Diagnostics::ILoggingChannel2

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannelFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory ABI::Windows::Foundation::Diagnostics::ILoggingChannelFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannelFactory2;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 ABI::Windows::Foundation::Diagnostics::ILoggingChannelFactory2

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannelOptions;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptions

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingChannelOptionsFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptionsFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingFields;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields ABI::Windows::Foundation::Diagnostics::ILoggingFields

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingOptions;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions ABI::Windows::Foundation::Diagnostics::ILoggingOptions

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingOptionsFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory ABI::Windows::Foundation::Diagnostics::ILoggingOptionsFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingSession;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession ABI::Windows::Foundation::Diagnostics::ILoggingSession

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingSessionFactory;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory ABI::Windows::Foundation::Diagnostics::ILoggingSessionFactory

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ILoggingTarget;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget ABI::Windows::Foundation::Diagnostics::ILoggingTarget

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                interface ITracingStatusChangedEventArgs;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs ABI::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class TracingStatusChangedEventArgs;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2bf27008-2eb4-5675-b1cd-e9906cc5ce64"))
IEventHandler<ABI::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs*, ABI::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Foundation::Diagnostics::TracingStatusChangedEventArgs*> __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_t;
#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs*>
//#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Foundation::Diagnostics::ITracingStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class ErrorDetails;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a6997f9d-7195-5972-8ecd-1c73aa5cb312"))
IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Diagnostics::ErrorDetails*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Diagnostics::ErrorDetails*, ABI::Windows::Foundation::Diagnostics::IErrorDetails*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Diagnostics.ErrorDetails>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Diagnostics::ErrorDetails*> __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Diagnostics::IErrorDetails*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Diagnostics::IErrorDetails*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE
#define DEF___FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9b05106d-77e0-5c24-82b0-9b2dc8f79671"))
IAsyncOperation<ABI::Windows::Foundation::Diagnostics::ErrorDetails*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Diagnostics::ErrorDetails*, ABI::Windows::Foundation::Diagnostics::IErrorDetails*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Diagnostics.ErrorDetails>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Foundation::Diagnostics::ErrorDetails*> __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t;
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Diagnostics::IErrorDetails*>
//#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Diagnostics::IErrorDetails*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LogFileGeneratedEventArgs;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0c6563b0-9d8b-5b60-994b-dee1174d1efb"))
ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::IFileLoggingSession*,ABI::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Diagnostics::IFileLoggingSession*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs*, ABI::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Foundation.Diagnostics.IFileLoggingSession, Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::IFileLoggingSession*,ABI::Windows::Foundation::Diagnostics::LogFileGeneratedEventArgs*> __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::IFileLoggingSession*,ABI::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::IFileLoggingSession*,ABI::Windows::Foundation::Diagnostics::ILogFileGeneratedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52c9c2a1-54a3-5ef9-9aff-014e7c454655"))
ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::ILoggingChannel*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Diagnostics::ILoggingChannel*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Foundation.Diagnostics.ILoggingChannel, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::ILoggingChannel*,IInspectable*> __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::ILoggingChannel*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Foundation::Diagnostics::ILoggingChannel*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e"))
IAsyncOperation<ABI::Windows::Storage::StorageFile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::StorageFile*> __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum CausalityRelation : int CausalityRelation;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum CausalitySource : int CausalitySource;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum CausalitySynchronousWork : int CausalitySynchronousWork;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum CausalityTraceLevel : int CausalityTraceLevel;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum ErrorOptions : unsigned int ErrorOptions;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum LoggingFieldFormat : int LoggingFieldFormat;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum LoggingLevel : int LoggingLevel;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                
                typedef enum LoggingOpcode : int LoggingOpcode;
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class FileLoggingSession;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingActivity;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingChannel;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingChannelOptions;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingFields;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingOptions;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class LoggingSession;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                class RuntimeBrokerErrorSettings;
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */











/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalityRelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum CausalityRelation : int
                {
                    CausalityRelation_AssignDelegate = 0,
                    CausalityRelation_Join = 1,
                    CausalityRelation_Choice = 2,
                    CausalityRelation_Cancel = 3,
                    CausalityRelation_Error = 4,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalitySource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum CausalitySource : int
                {
                    CausalitySource_Application = 0,
                    CausalitySource_Library = 1,
                    CausalitySource_System = 2,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalitySynchronousWork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum CausalitySynchronousWork : int
                {
                    CausalitySynchronousWork_CompletionNotification = 0,
                    CausalitySynchronousWork_ProgressNotification = 1,
                    CausalitySynchronousWork_Execution = 2,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalityTraceLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum CausalityTraceLevel : int
                {
                    CausalityTraceLevel_Required = 0,
                    CausalityTraceLevel_Important = 1,
                    CausalityTraceLevel_Verbose = 2,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.ErrorOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, flags, contract] */
                enum ErrorOptions : unsigned int
                {
                    ErrorOptions_None = 0,
                    ErrorOptions_SuppressExceptions = 0x1,
                    ErrorOptions_ForceExceptions = 0x2,
                    ErrorOptions_UseSetErrorInfo = 0x4,
                    ErrorOptions_SuppressSetErrorInfo = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(ErrorOptions)
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingFieldFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum LoggingFieldFormat : int
                {
                    LoggingFieldFormat_Default = 0,
                    LoggingFieldFormat_Hidden = 1,
                    LoggingFieldFormat_String = 2,
                    LoggingFieldFormat_Boolean = 3,
                    LoggingFieldFormat_Hexadecimal = 4,
                    LoggingFieldFormat_ProcessId = 5,
                    LoggingFieldFormat_ThreadId = 6,
                    LoggingFieldFormat_Port = 7,
                    LoggingFieldFormat_Ipv4Address = 8,
                    LoggingFieldFormat_Ipv6Address = 9,
                    LoggingFieldFormat_SocketAddress = 10,
                    LoggingFieldFormat_Xml = 11,
                    LoggingFieldFormat_Json = 12,
                    LoggingFieldFormat_Win32Error = 13,
                    LoggingFieldFormat_NTStatus = 14,
                    LoggingFieldFormat_HResult = 15,
                    LoggingFieldFormat_FileTime = 16,
                    LoggingFieldFormat_Signed = 17,
                    LoggingFieldFormat_Unsigned = 18,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum LoggingLevel : int
                {
                    LoggingLevel_Verbose = 0,
                    LoggingLevel_Information = 1,
                    LoggingLevel_Warning = 2,
                    LoggingLevel_Error = 3,
                    LoggingLevel_Critical = 4,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingOpcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum LoggingOpcode : int
                {
                    LoggingOpcode_Info = 0,
                    LoggingOpcode_Start = 1,
                    LoggingOpcode_Stop = 2,
                    LoggingOpcode_Reply = 6,
                    LoggingOpcode_Resume = 7,
                    LoggingOpcode_Suspend = 8,
                    LoggingOpcode_Send = 9,
                };
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.AsyncCausalityTracer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics[] = L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("50850B26-267E-451B-A890-AB6A370245EE"), exclusiveto, contract] */
                MIDL_INTERFACE("50850B26-267E-451B-A890-AB6A370245EE")
                IAsyncCausalityTracerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TraceOperationCreation(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySource source,
                        /* [in] */GUID platformId,
                        /* [in] */UINT64 operationId,
                        /* [in] */__RPC__in HSTRING operationName,
                        /* [in] */UINT64 relatedContext
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TraceOperationCompletion(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySource source,
                        /* [in] */GUID platformId,
                        /* [in] */UINT64 operationId,
                        /* [in] */AsyncStatus status
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TraceOperationRelation(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySource source,
                        /* [in] */GUID platformId,
                        /* [in] */UINT64 operationId,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityRelation relation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TraceSynchronousWorkStart(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySource source,
                        /* [in] */GUID platformId,
                        /* [in] */UINT64 operationId,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork work
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TraceSynchronousWorkCompletion(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel traceLevel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySource source,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::CausalitySynchronousWork work
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TracingStatusChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TracingStatusChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAsyncCausalityTracerStatics=_uuidof(IAsyncCausalityTracerStatics);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.ErrorDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetails[] = L"Windows.Foundation.Diagnostics.IErrorDetails";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("378CBB01-2CC9-428F-8C55-2C990D463E8F"), exclusiveto, contract] */
                MIDL_INTERFACE("378CBB01-2CC9-428F-8C55-2C990D463E8F")
                IErrorDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LongDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HelpUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IErrorDetails=_uuidof(IErrorDetails);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorDetailsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.ErrorDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetailsStatics[] = L"Windows.Foundation.Diagnostics.IErrorDetailsStatics";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("B7703750-0B1D-46C8-AA0E-4B8178E4FCE9"), exclusiveto, contract] */
                MIDL_INTERFACE("B7703750-0B1D-46C8-AA0E-4B8178E4FCE9")
                IErrorDetailsStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateFromHResultAsync(
                        /* [in] */INT32 errorCode,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IErrorDetailsStatics=_uuidof(IErrorDetailsStatics);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorReportingSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorReportingSettings[] = L"Windows.Foundation.Diagnostics.IErrorReportingSettings";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("16369792-B03E-4BA1-8BB8-D28F4AB4D2C0"), contract] */
                MIDL_INTERFACE("16369792-B03E-4BA1-8BB8-D28F4AB4D2C0")
                IErrorReportingSettings : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetErrorOptions(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::ErrorOptions value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetErrorOptions(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Diagnostics::ErrorOptions * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IErrorReportingSettings=_uuidof(IErrorReportingSettings);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IFileLoggingSession
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSession[] = L"Windows.Foundation.Diagnostics.IFileLoggingSession";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("24C74216-FED2-404C-895F-1F9699CB02F7"), contract] */
                MIDL_INTERFACE("24C74216-FED2-404C-895F-1F9699CB02F7")
                IFileLoggingSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddLoggingChannel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddLoggingChannelWithLevel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel maxLevel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveLoggingChannel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CloseAndSaveToFileAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LogFileGenerated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LogFileGenerated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileLoggingSession=_uuidof(IFileLoggingSession);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IFileLoggingSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.FileLoggingSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("EEA08DCE-8447-4DAA-9133-12EB46F697D4"), exclusiveto, contract] */
                MIDL_INTERFACE("EEA08DCE-8447-4DAA-9133-12EB46F697D4")
                IFileLoggingSessionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::IFileLoggingSession * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileLoggingSessionFactory=_uuidof(IFileLoggingSessionFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("269E976F-0D38-4C1A-B53F-B395D881DF84"), exclusiveto, contract] */
                MIDL_INTERFACE("269E976F-0D38-4C1A-B53F-B395D881DF84")
                ILogFileGeneratedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILogFileGeneratedEventArgs=_uuidof(ILogFileGeneratedEventArgs);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity[] = L"Windows.Foundation.Diagnostics.ILoggingActivity";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("BC032941-B766-4CB5-9848-97AC6BA6D60C"), exclusiveto, contract] */
                MIDL_INTERFACE("BC032941-B766-4CB5-9848-97AC6BA6D60C")
                ILoggingActivity : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingActivity=_uuidof(ILoggingActivity);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivity2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Diagnostics.ILoggingActivity
 *     Windows.Foundation.IClosable
 *     Windows.Foundation.Diagnostics.ILoggingTarget
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity2[] = L"Windows.Foundation.Diagnostics.ILoggingActivity2";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("26C29808-6322-456A-AF82-80C8642F178B"), exclusiveto, contract] */
                MIDL_INTERFACE("26C29808-6322-456A-AF82-80C8642F178B")
                ILoggingActivity2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StopActivity(
                        /* [in] */__RPC__in HSTRING stopEventName
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StopActivityWithFields(
                        /* [in] */__RPC__in HSTRING stopEventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StopActivityWithFieldsAndOptions(
                        /* [in] */__RPC__in HSTRING stopEventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingOptions * options
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingActivity2=_uuidof(ILoggingActivity2);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivityFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivityFactory[] = L"Windows.Foundation.Diagnostics.ILoggingActivityFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("6B33B483-E10A-4C58-97D5-10FB451074FB"), exclusiveto, contract] */
                MIDL_INTERFACE("6B33B483-E10A-4C58-97D5-10FB451074FB")
                ILoggingActivityFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateLoggingActivity(
                        /* [in] */__RPC__in HSTRING activityName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * loggingActivity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateLoggingActivityWithLevel(
                        /* [in] */__RPC__in HSTRING activityName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * loggingActivity
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingActivityFactory=_uuidof(ILoggingActivityFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannel
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel[] = L"Windows.Foundation.Diagnostics.ILoggingChannel";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("E9A50343-11D7-4F01-B5CA-CF495278C0A8"), contract] */
                MIDL_INTERFACE("E9A50343-11D7-4F01-B5CA-CF495278C0A8")
                ILoggingChannel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Level(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Diagnostics::LoggingLevel * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogMessage(
                        /* [in] */__RPC__in HSTRING eventString
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogMessageWithLevel(
                        /* [in] */__RPC__in HSTRING eventString,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogValuePair(
                        /* [in] */__RPC__in HSTRING value1,
                        /* [in] */INT32 value2
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogValuePairWithLevel(
                        /* [in] */__RPC__in HSTRING value1,
                        /* [in] */INT32 value2,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LoggingEnabled(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LoggingEnabled(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannel=_uuidof(ILoggingChannel);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannel2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Diagnostics.ILoggingChannel
 *     Windows.Foundation.IClosable
 *     Windows.Foundation.Diagnostics.ILoggingTarget
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel2[] = L"Windows.Foundation.Diagnostics.ILoggingChannel2";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("9F4C3CF3-0BAC-45A5-9E33-BAF3F3A246A5"), exclusiveto, contract] */
                MIDL_INTERFACE("9F4C3CF3-0BAC-45A5-9E33-BAF3F3A246A5")
                ILoggingChannel2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannel2=_uuidof(ILoggingChannel2);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("4EDC5B9C-AF80-4A9B-B0DC-398F9AE5207B"), exclusiveto, contract] */
                MIDL_INTERFACE("4EDC5B9C-AF80-4A9B-B0DC-398F9AE5207B")
                ILoggingChannelFactory : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannelFactory=_uuidof(ILoggingChannelFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory2[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("4C6EF5DD-3B27-4DC9-99F0-299C6E4603A1"), exclusiveto, contract] */
                MIDL_INTERFACE("4C6EF5DD-3B27-4DC9-99F0-299C6E4603A1")
                ILoggingChannelFactory2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithOptions(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithOptionsAndId(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptions * options,
                        /* [in] */GUID id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannelFactory2=_uuidof(ILoggingChannelFactory2);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptions";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("C3E847FF-0EBB-4A53-8C54-DEC24926CB2C"), exclusiveto, contract] */
                MIDL_INTERFACE("C3E847FF-0EBB-4A53-8C54-DEC24926CB2C")
                ILoggingChannelOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Group(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Group(
                        /* [in] */GUID value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannelOptions=_uuidof(ILoggingChannelOptions);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("A93151DA-7FAF-4191-8755-5E86DC65D896"), exclusiveto, contract] */
                MIDL_INTERFACE("A93151DA-7FAF-4191-8755-5E86DC65D896")
                ILoggingChannelOptionsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */GUID group,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannelOptions * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingChannelOptionsFactory=_uuidof(ILoggingChannelOptionsFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingFields
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingFields
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingFields[] = L"Windows.Foundation.Diagnostics.ILoggingFields";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("D7F6B7AF-762D-4579-83BD-52C23BC333BC"), exclusiveto, contract] */
                MIDL_INTERFACE("D7F6B7AF-762D-4579-83BD-52C23BC333BC")
                ILoggingFields : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE BeginStruct(
                        /* [in] */__RPC__in HSTRING name
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE BeginStructWithTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT32 tags
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EndStruct(void) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddEmpty(
                        /* [in] */__RPC__in HSTRING name
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddEmptyWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddEmptyWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */BYTE value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */BYTE value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */BYTE value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt8ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT16 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT16 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT16 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt16ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT16 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT16 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT16 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt16ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT32 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT32 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT32 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt32ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt32ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT64 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT64 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */INT64 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddInt64ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT64 value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT64 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT64 value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddUInt64ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingle(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingleWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */FLOAT value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingleWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */FLOAT value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingleArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingleArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSingleArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDouble(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDoubleWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */DOUBLE value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDoubleWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */DOUBLE value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDoubleArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDoubleArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDoubleArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */WCHAR value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16WithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */WCHAR value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16WithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */WCHAR value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16Array(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16ArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddChar16ArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBoolean(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */boolean value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBooleanWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */boolean value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBooleanWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */boolean value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBooleanArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBooleanArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddBooleanArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddString(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddStringWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddStringWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddStringArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddStringArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddStringArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuid(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */GUID value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuidWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */GUID value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuidWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */GUID value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuidArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuidArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddGuidArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTime(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTimeWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::DateTime value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTimeWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::DateTime value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTimeArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTimeArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::DateTime * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddDateTimeArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::DateTime * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpan(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpanWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::TimeSpan value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpanWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::TimeSpan value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpanArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpanArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::TimeSpan * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddTimeSpanArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::TimeSpan * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPoint(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Point value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPointWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Point value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPointWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Point value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPointArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Point * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPointArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Point * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddPointArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Point * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSize(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Size value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSizeWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Size value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSizeWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Size value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSizeArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Size * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSizeArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Size * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddSizeArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Size * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRect(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Rect value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRectWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Rect value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRectWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */ABI::Windows::Foundation::Rect value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRectArray(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRectArrayWithFormat(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Rect * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddRectArrayWithFormatAndTags(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */UINT32 __valueSize,
                        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) ABI::Windows::Foundation::Rect * value,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingFieldFormat format,
                        /* [in] */INT32 tags
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingFields=_uuidof(ILoggingFields);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptions[] = L"Windows.Foundation.Diagnostics.ILoggingOptions";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("90BC7850-0192-4F5D-AC26-006ADACA12D8"), exclusiveto, contract] */
                MIDL_INTERFACE("90BC7850-0192-4F5D-AC26-006ADACA12D8")
                ILoggingOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Keywords(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Keywords(
                        /* [in] */INT64 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tags(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Tags(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Task(
                        /* [retval, out] */__RPC__out INT16 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Task(
                        /* [in] */INT16 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Opcode(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Diagnostics::LoggingOpcode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Opcode(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingOpcode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ActivityId(
                        /* [in] */GUID value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelatedActivityId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelatedActivityId(
                        /* [in] */GUID value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingOptions=_uuidof(ILoggingOptions);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("D713C6CB-98AB-464B-9F22-A3268478368A"), exclusiveto, contract] */
                MIDL_INTERFACE("D713C6CB-98AB-464B-9F22-A3268478368A")
                ILoggingOptionsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithKeywords(
                        /* [in] */INT64 keywords,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingOptions * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingOptionsFactory=_uuidof(ILoggingOptionsFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingSession
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSession[] = L"Windows.Foundation.Diagnostics.ILoggingSession";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("6221F306-9380-4AD7-BAF5-41EA9310D768"), contract] */
                MIDL_INTERFACE("6221F306-9380-4AD7-BAF5-41EA9310D768")
                ILoggingSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * folder,
                        /* [in] */__RPC__in HSTRING fileName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddLoggingChannel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddLoggingChannelWithLevel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel maxLevel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveLoggingChannel(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingChannel * loggingChannel
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingSession=_uuidof(ILoggingSession);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.ILoggingSessionFactory";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("4E937EE5-58FD-45E0-8C2F-A132EFF95C1E"), exclusiveto, contract] */
                MIDL_INTERFACE("4E937EE5-58FD-45E0-8C2F-A132EFF95C1E")
                ILoggingSessionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingSession * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingSessionFactory=_uuidof(ILoggingSessionFactory);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingTarget[] = L"Windows.Foundation.Diagnostics.ILoggingTarget";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("65F16C35-E388-4E26-B17A-F51CD3A83916"), contract] */
                MIDL_INTERFACE("65F16C35-E388-4E26-B17A-F51CD3A83916")
                ILoggingTarget : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE IsEnabled(
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE IsEnabledWithLevel(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE IsEnabledWithLevelAndKeywords(
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [in] */INT64 keywords,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogEvent(
                        /* [in] */__RPC__in HSTRING eventName
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogEventWithFields(
                        /* [in] */__RPC__in HSTRING eventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogEventWithFieldsAndLevel(
                        /* [in] */__RPC__in HSTRING eventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LogEventWithFieldsAndOptions(
                        /* [in] */__RPC__in HSTRING eventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingOptions * options
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartActivity(
                        /* [in] */__RPC__in HSTRING startEventName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartActivityWithFields(
                        /* [in] */__RPC__in HSTRING startEventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartActivityWithFieldsAndLevel(
                        /* [in] */__RPC__in HSTRING startEventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartActivityWithFieldsAndOptions(
                        /* [in] */__RPC__in HSTRING startEventName,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingFields * fields,
                        /* [in] */ABI::Windows::Foundation::Diagnostics::LoggingLevel level,
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Diagnostics::ILoggingOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Diagnostics::ILoggingActivity * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILoggingTarget=_uuidof(ILoggingTarget);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Diagnostics {
                /* [object, uuid("410B7711-FF3B-477F-9C9A-D2EFDA302DC3"), exclusiveto, contract] */
                MIDL_INTERFACE("410B7711-FF3B-477F-9C9A-D2EFDA302DC3")
                ITracingStatusChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Enabled(
                        /* [retval, out] */__RPC__out boolean * enabled
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TraceLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Diagnostics::CausalityTraceLevel * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITracingStatusChangedEventArgs=_uuidof(ITracingStatusChangedEventArgs);
                
            } /* Windows */
        } /* Foundation */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.AsyncCausalityTracer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_AsyncCausalityTracer_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_AsyncCausalityTracer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer[] = L"Windows.Foundation.Diagnostics.AsyncCausalityTracer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.ErrorDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Foundation.Diagnostics.IErrorDetailsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IErrorDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_ErrorDetails_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_ErrorDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_ErrorDetails[] = L"Windows.Foundation.Diagnostics.ErrorDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.FileLoggingSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.IFileLoggingSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IFileLoggingSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_FileLoggingSession_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_FileLoggingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_FileLoggingSession[] = L"Windows.Foundation.Diagnostics.FileLoggingSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingActivityFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingActivity ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.Diagnostics.ILoggingActivity2
 *    Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingActivity_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingActivity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingActivity[] = L"Windows.Foundation.Diagnostics.LoggingActivity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingChannel ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.Diagnostics.ILoggingChannel2
 *    Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannel_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannel[] = L"Windows.Foundation.Diagnostics.LoggingChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingChannelOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannelOptions_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannelOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.LoggingChannelOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingFields
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingFields ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingFields_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingFields_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingFields[] = L"Windows.Foundation.Diagnostics.LoggingFields";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingOptions_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingOptions[] = L"Windows.Foundation.Diagnostics.LoggingOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingSession_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingSession[] = L"Windows.Foundation.Diagnostics.LoggingSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IErrorReportingSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings[] = L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs;

#endif // ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs;

typedef struct __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails;

typedef struct __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CDiagnostics__CErrorDetails **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl;

interface __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel;


typedef enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode;












































/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalityRelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation
{
    CausalityRelation_AssignDelegate = 0,
    CausalityRelation_Join = 1,
    CausalityRelation_Choice = 2,
    CausalityRelation_Cancel = 3,
    CausalityRelation_Error = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalitySource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource
{
    CausalitySource_Application = 0,
    CausalitySource_Library = 1,
    CausalitySource_System = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalitySynchronousWork
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork
{
    CausalitySynchronousWork_CompletionNotification = 0,
    CausalitySynchronousWork_ProgressNotification = 1,
    CausalitySynchronousWork_Execution = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.CausalityTraceLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel
{
    CausalityTraceLevel_Required = 0,
    CausalityTraceLevel_Important = 1,
    CausalityTraceLevel_Verbose = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.ErrorOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions
{
    ErrorOptions_None = 0,
    ErrorOptions_SuppressExceptions = 0x1,
    ErrorOptions_ForceExceptions = 0x2,
    ErrorOptions_UseSetErrorInfo = 0x4,
    ErrorOptions_SuppressSetErrorInfo = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingFieldFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat
{
    LoggingFieldFormat_Default = 0,
    LoggingFieldFormat_Hidden = 1,
    LoggingFieldFormat_String = 2,
    LoggingFieldFormat_Boolean = 3,
    LoggingFieldFormat_Hexadecimal = 4,
    LoggingFieldFormat_ProcessId = 5,
    LoggingFieldFormat_ThreadId = 6,
    LoggingFieldFormat_Port = 7,
    LoggingFieldFormat_Ipv4Address = 8,
    LoggingFieldFormat_Ipv6Address = 9,
    LoggingFieldFormat_SocketAddress = 10,
    LoggingFieldFormat_Xml = 11,
    LoggingFieldFormat_Json = 12,
    LoggingFieldFormat_Win32Error = 13,
    LoggingFieldFormat_NTStatus = 14,
    LoggingFieldFormat_HResult = 15,
    LoggingFieldFormat_FileTime = 16,
    LoggingFieldFormat_Signed = 17,
    LoggingFieldFormat_Unsigned = 18,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel
{
    LoggingLevel_Verbose = 0,
    LoggingLevel_Information = 1,
    LoggingLevel_Warning = 2,
    LoggingLevel_Error = 3,
    LoggingLevel_Critical = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Foundation.Diagnostics.LoggingOpcode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode
{
    LoggingOpcode_Info = 0,
    LoggingOpcode_Start = 1,
    LoggingOpcode_Stop = 2,
    LoggingOpcode_Reply = 6,
    LoggingOpcode_Resume = 7,
    LoggingOpcode_Suspend = 8,
    LoggingOpcode_Send = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.AsyncCausalityTracer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IAsyncCausalityTracerStatics[] = L"Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics";
/* [object, uuid("50850B26-267E-451B-A890-AB6A370245EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TraceOperationCreation )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
        /* [in] */GUID platformId,
        /* [in] */UINT64 operationId,
        /* [in] */__RPC__in HSTRING operationName,
        /* [in] */UINT64 relatedContext
        );
    HRESULT ( STDMETHODCALLTYPE *TraceOperationCompletion )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
        /* [in] */GUID platformId,
        /* [in] */UINT64 operationId,
        /* [in] */AsyncStatus status
        );
    HRESULT ( STDMETHODCALLTYPE *TraceOperationRelation )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
        /* [in] */GUID platformId,
        /* [in] */UINT64 operationId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityRelation relation
        );
    HRESULT ( STDMETHODCALLTYPE *TraceSynchronousWorkStart )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
        /* [in] */GUID platformId,
        /* [in] */UINT64 operationId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork work
        );
    HRESULT ( STDMETHODCALLTYPE *TraceSynchronousWorkCompletion )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel traceLevel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySource source,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CCausalitySynchronousWork work
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TracingStatusChanged )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CFoundation__CDiagnostics__CTracingStatusChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TracingStatusChanged )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_TraceOperationCreation(This,traceLevel,source,platformId,operationId,operationName,relatedContext) \
    ( (This)->lpVtbl->TraceOperationCreation(This,traceLevel,source,platformId,operationId,operationName,relatedContext) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_TraceOperationCompletion(This,traceLevel,source,platformId,operationId,status) \
    ( (This)->lpVtbl->TraceOperationCompletion(This,traceLevel,source,platformId,operationId,status) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_TraceOperationRelation(This,traceLevel,source,platformId,operationId,relation) \
    ( (This)->lpVtbl->TraceOperationRelation(This,traceLevel,source,platformId,operationId,relation) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_TraceSynchronousWorkStart(This,traceLevel,source,platformId,operationId,work) \
    ( (This)->lpVtbl->TraceSynchronousWorkStart(This,traceLevel,source,platformId,operationId,work) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_TraceSynchronousWorkCompletion(This,traceLevel,source,work) \
    ( (This)->lpVtbl->TraceSynchronousWorkCompletion(This,traceLevel,source,work) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_add_TracingStatusChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_TracingStatusChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_remove_TracingStatusChanged(This,cookie) \
    ( (This)->lpVtbl->remove_TracingStatusChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIAsyncCausalityTracerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.ErrorDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetails[] = L"Windows.Foundation.Diagnostics.IErrorDetails";
/* [object, uuid("378CBB01-2CC9-428F-8C55-2C990D463E8F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LongDescription )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HelpUri )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_get_LongDescription(This,value) \
    ( (This)->lpVtbl->get_LongDescription(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_get_HelpUri(This,value) \
    ( (This)->lpVtbl->get_HelpUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorDetailsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.ErrorDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorDetailsStatics[] = L"Windows.Foundation.Diagnostics.IErrorDetailsStatics";
/* [object, uuid("B7703750-0B1D-46C8-AA0E-4B8178E4FCE9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromHResultAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics * This,
        /* [in] */INT32 errorCode,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CDiagnostics__CErrorDetails * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_CreateFromHResultAsync(This,errorCode,operation) \
    ( (This)->lpVtbl->CreateFromHResultAsync(This,errorCode,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorDetailsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IErrorReportingSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IErrorReportingSettings[] = L"Windows.Foundation.Diagnostics.IErrorReportingSettings";
/* [object, uuid("16369792-B03E-4BA1-8BB8-D28F4AB4D2C0"), contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetErrorOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions value
        );
    HRESULT ( STDMETHODCALLTYPE *GetErrorOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CErrorOptions * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_SetErrorOptions(This,value) \
    ( (This)->lpVtbl->SetErrorOptions(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_GetErrorOptions(This,value) \
    ( (This)->lpVtbl->GetErrorOptions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIErrorReportingSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IFileLoggingSession
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSession[] = L"Windows.Foundation.Diagnostics.IFileLoggingSession";
/* [object, uuid("24C74216-FED2-404C-895F-1F9699CB02F7"), contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddLoggingChannelWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel maxLevel
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    HRESULT ( STDMETHODCALLTYPE *CloseAndSaveToFileAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LogFileGenerated )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CIFileLoggingSession_Windows__CFoundation__CDiagnostics__CLogFileGeneratedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LogFileGenerated )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_AddLoggingChannel(This,loggingChannel) \
    ( (This)->lpVtbl->AddLoggingChannel(This,loggingChannel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) \
    ( (This)->lpVtbl->AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_RemoveLoggingChannel(This,loggingChannel) \
    ( (This)->lpVtbl->RemoveLoggingChannel(This,loggingChannel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_CloseAndSaveToFileAsync(This,operation) \
    ( (This)->lpVtbl->CloseAndSaveToFileAsync(This,operation) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_add_LogFileGenerated(This,handler,token) \
    ( (This)->lpVtbl->add_LogFileGenerated(This,handler,token) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_remove_LogFileGenerated(This,token) \
    ( (This)->lpVtbl->remove_LogFileGenerated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.IFileLoggingSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.FileLoggingSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_IFileLoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.IFileLoggingSessionFactory";
/* [object, uuid("EEA08DCE-8447-4DAA-9133-12EB46F697D4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSession * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_Create(This,name,result) \
    ( (This)->lpVtbl->Create(This,name,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CIFileLoggingSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs";
/* [object, uuid("269E976F-0D38-4C1A-B53F-B395D881DF84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILogFileGeneratedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity[] = L"Windows.Foundation.Diagnostics.ILoggingActivity";
/* [object, uuid("BC032941-B766-4CB5-9848-97AC6BA6D60C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivity2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Diagnostics.ILoggingActivity
 *     Windows.Foundation.IClosable
 *     Windows.Foundation.Diagnostics.ILoggingTarget
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivity2[] = L"Windows.Foundation.Diagnostics.ILoggingActivity2";
/* [object, uuid("26C29808-6322-456A-AF82-80C8642F178B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StopActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
        /* [in] */__RPC__in HSTRING stopEventName
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StopActivityWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
        /* [in] */__RPC__in HSTRING stopEventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StopActivityWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2 * This,
        /* [in] */__RPC__in HSTRING stopEventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_StopActivity(This,stopEventName) \
    ( (This)->lpVtbl->StopActivity(This,stopEventName) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_StopActivityWithFields(This,stopEventName,fields) \
    ( (This)->lpVtbl->StopActivityWithFields(This,stopEventName,fields) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_StopActivityWithFieldsAndOptions(This,stopEventName,fields,options) \
    ( (This)->lpVtbl->StopActivityWithFieldsAndOptions(This,stopEventName,fields,options) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingActivityFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingActivity
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingActivityFactory[] = L"Windows.Foundation.Diagnostics.ILoggingActivityFactory";
/* [object, uuid("6B33B483-E10A-4C58-97D5-10FB451074FB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLoggingActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
        /* [in] */__RPC__in HSTRING activityName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * loggingActivity
        );
    HRESULT ( STDMETHODCALLTYPE *CreateLoggingActivityWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory * This,
        /* [in] */__RPC__in HSTRING activityName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * loggingActivity
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_CreateLoggingActivity(This,activityName,loggingChannel,loggingActivity) \
    ( (This)->lpVtbl->CreateLoggingActivity(This,activityName,loggingChannel,loggingActivity) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_CreateLoggingActivityWithLevel(This,activityName,loggingChannel,level,loggingActivity) \
    ( (This)->lpVtbl->CreateLoggingActivityWithLevel(This,activityName,loggingChannel,level,loggingActivity) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivityFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannel
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel[] = L"Windows.Foundation.Diagnostics.ILoggingChannel";
/* [object, uuid("E9A50343-11D7-4F01-B5CA-CF495278C0A8"), contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Level )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogMessage )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */__RPC__in HSTRING eventString
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogMessageWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */__RPC__in HSTRING eventString,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogValuePair )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */__RPC__in HSTRING value1,
        /* [in] */INT32 value2
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogValuePairWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */__RPC__in HSTRING value1,
        /* [in] */INT32 value2,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LoggingEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CFoundation__CDiagnostics__CILoggingChannel_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LoggingEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_get_Enabled(This,value) \
    ( (This)->lpVtbl->get_Enabled(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_get_Level(This,value) \
    ( (This)->lpVtbl->get_Level(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_LogMessage(This,eventString) \
    ( (This)->lpVtbl->LogMessage(This,eventString) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_LogMessageWithLevel(This,eventString,level) \
    ( (This)->lpVtbl->LogMessageWithLevel(This,eventString,level) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_LogValuePair(This,value1,value2) \
    ( (This)->lpVtbl->LogValuePair(This,value1,value2) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_LogValuePairWithLevel(This,value1,value2,level) \
    ( (This)->lpVtbl->LogValuePairWithLevel(This,value1,value2,level) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_add_LoggingEnabled(This,handler,token) \
    ( (This)->lpVtbl->add_LoggingEnabled(This,handler,token) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_remove_LoggingEnabled(This,token) \
    ( (This)->lpVtbl->remove_LoggingEnabled(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannel2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Diagnostics.ILoggingChannel
 *     Windows.Foundation.IClosable
 *     Windows.Foundation.Diagnostics.ILoggingTarget
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannel2[] = L"Windows.Foundation.Diagnostics.ILoggingChannel2";
/* [object, uuid("9F4C3CF3-0BAC-45A5-9E33-BAF3F3A246A5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2 * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory";
/* [object, uuid("4EDC5B9C-AF80-4A9B-B0DC-398F9AE5207B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("This constructor creates a LoggingChannel in Windows 8.1 compatibility mode. Prefer the two-parameter constructor.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_Create(This,name,result) \
    ( (This)->lpVtbl->Create(This,name,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelFactory2[] = L"Windows.Foundation.Diagnostics.ILoggingChannelFactory2";
/* [object, uuid("4C6EF5DD-3B27-4DC9-99F0-299C6E4603A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithOptionsAndId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * options,
        /* [in] */GUID id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_CreateWithOptions(This,name,options,result) \
    ( (This)->lpVtbl->CreateWithOptions(This,name,options,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_CreateWithOptionsAndId(This,name,options,id,result) \
    ( (This)->lpVtbl->CreateWithOptionsAndId(This,name,options,id,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptions";
/* [object, uuid("C3E847FF-0EBB-4A53-8C54-DEC24926CB2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_get_Group(This,value) \
    ( (This)->lpVtbl->get_Group(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_put_Group(This,value) \
    ( (This)->lpVtbl->put_Group(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingChannelOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory";
/* [object, uuid("A93151DA-7FAF-4191-8755-5E86DC65D896"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory * This,
        /* [in] */GUID group,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptions * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_Create(This,group,result) \
    ( (This)->lpVtbl->Create(This,group,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannelOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingFields
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingFields
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingFields[] = L"Windows.Foundation.Diagnostics.ILoggingFields";
/* [object, uuid("D7F6B7AF-762D-4579-83BD-52C23BC333BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *BeginStruct )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *BeginStructWithTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT32 tags
        );
    HRESULT ( STDMETHODCALLTYPE *EndStruct )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddEmpty )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddEmptyWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddEmptyWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */BYTE value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */BYTE value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */BYTE value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt8ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT16 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT16 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT16 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT16 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT16 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT16 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT16 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT16 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT32 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT32 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT32 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt32ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT32 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt32ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT32 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT64 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT64 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */INT64 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddInt64ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) INT64 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT64 value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT64 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT64 value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddUInt64ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) UINT64 * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingle )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */FLOAT value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingleWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */FLOAT value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingleWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */FLOAT value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingleArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingleArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSingleArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) FLOAT * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDouble )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */DOUBLE value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDoubleWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */DOUBLE value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDoubleWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */DOUBLE value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDoubleArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDoubleArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDoubleArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) DOUBLE * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16 )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */WCHAR value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16WithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */WCHAR value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16WithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */WCHAR value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16Array )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16ArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddChar16ArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) WCHAR * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBoolean )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */boolean value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBooleanWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */boolean value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBooleanWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */boolean value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBooleanArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBooleanArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddBooleanArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) boolean * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddString )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddStringWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddStringWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddStringArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddStringArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddStringArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) HSTRING * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuid )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */GUID value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuidWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */GUID value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuidWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */GUID value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuidArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuidArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddGuidArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) GUID * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTime )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTimeWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTimeWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTimeArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTimeArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddDateTimeArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CDateTime * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpan )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpanWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpanWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddTimeSpanArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CTimeSpan * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPoint )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPointWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPointWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPointArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPointArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddPointArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CPoint * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSize )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSizeWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSizeWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSizeArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSizeArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddSizeArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CSize * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRect )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRectWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRectWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRectArray )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRectArrayWithFormat )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddRectArrayWithFormatAndTags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) __x_ABI_CWindows_CFoundation_CRect * value,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingFieldFormat format,
        /* [in] */INT32 tags
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFieldsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_BeginStruct(This,name) \
    ( (This)->lpVtbl->BeginStruct(This,name) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_BeginStructWithTags(This,name,tags) \
    ( (This)->lpVtbl->BeginStructWithTags(This,name,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_EndStruct(This) \
    ( (This)->lpVtbl->EndStruct(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddEmpty(This,name) \
    ( (This)->lpVtbl->AddEmpty(This,name) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddEmptyWithFormat(This,name,format) \
    ( (This)->lpVtbl->AddEmptyWithFormat(This,name,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddEmptyWithFormatAndTags(This,name,format,tags) \
    ( (This)->lpVtbl->AddEmptyWithFormatAndTags(This,name,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8(This,name,value) \
    ( (This)->lpVtbl->AddUInt8(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddUInt8WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddUInt8WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddUInt8Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddUInt8ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt8ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddUInt8ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16(This,name,value) \
    ( (This)->lpVtbl->AddInt16(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddInt16WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddInt16WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddInt16Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddInt16ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16(This,name,value) \
    ( (This)->lpVtbl->AddUInt16(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddUInt16WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddUInt16WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddUInt16Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddUInt16ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddUInt16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32(This,name,value) \
    ( (This)->lpVtbl->AddInt32(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddInt32WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddInt32WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddInt32Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddInt32ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32(This,name,value) \
    ( (This)->lpVtbl->AddUInt32(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddUInt32WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddUInt32WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddUInt32Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddUInt32ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddUInt32ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64(This,name,value) \
    ( (This)->lpVtbl->AddInt64(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddInt64WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddInt64WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddInt64Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddInt64ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64(This,name,value) \
    ( (This)->lpVtbl->AddUInt64(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddUInt64WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddUInt64WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddUInt64Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddUInt64ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddUInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddUInt64ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingle(This,name,value) \
    ( (This)->lpVtbl->AddSingle(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingleWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddSingleWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingleWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddSingleWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingleArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddSingleArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingleArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddSingleArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSingleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddSingleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDouble(This,name,value) \
    ( (This)->lpVtbl->AddDouble(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDoubleWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddDoubleWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDoubleWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddDoubleWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDoubleArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddDoubleArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDoubleArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddDoubleArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDoubleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddDoubleArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16(This,name,value) \
    ( (This)->lpVtbl->AddChar16(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16WithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddChar16WithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16WithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddChar16WithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16Array(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddChar16Array(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16ArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddChar16ArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddChar16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddChar16ArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBoolean(This,name,value) \
    ( (This)->lpVtbl->AddBoolean(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBooleanWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddBooleanWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBooleanWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddBooleanWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBooleanArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddBooleanArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBooleanArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddBooleanArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddBooleanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddBooleanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddString(This,name,value) \
    ( (This)->lpVtbl->AddString(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddStringWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddStringWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddStringWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddStringWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddStringArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddStringArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddStringArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddStringArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddStringArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddStringArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuid(This,name,value) \
    ( (This)->lpVtbl->AddGuid(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuidWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddGuidWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuidWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddGuidWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuidArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddGuidArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuidArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddGuidArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddGuidArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddGuidArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTime(This,name,value) \
    ( (This)->lpVtbl->AddDateTime(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTimeWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddDateTimeWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTimeWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddDateTimeWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTimeArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddDateTimeArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTimeArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddDateTimeArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddDateTimeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddDateTimeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpan(This,name,value) \
    ( (This)->lpVtbl->AddTimeSpan(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpanWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddTimeSpanWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpanWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddTimeSpanWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpanArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddTimeSpanArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpanArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddTimeSpanArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddTimeSpanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddTimeSpanArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPoint(This,name,value) \
    ( (This)->lpVtbl->AddPoint(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPointWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddPointWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPointWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddPointWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPointArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddPointArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPointArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddPointArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddPointArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddPointArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSize(This,name,value) \
    ( (This)->lpVtbl->AddSize(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSizeWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddSizeWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSizeWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddSizeWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSizeArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddSizeArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSizeArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddSizeArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddSizeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddSizeArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRect(This,name,value) \
    ( (This)->lpVtbl->AddRect(This,name,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRectWithFormat(This,name,value,format) \
    ( (This)->lpVtbl->AddRectWithFormat(This,name,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRectWithFormatAndTags(This,name,value,format,tags) \
    ( (This)->lpVtbl->AddRectWithFormatAndTags(This,name,value,format,tags) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRectArray(This,name,__valueSize,value) \
    ( (This)->lpVtbl->AddRectArray(This,name,__valueSize,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRectArrayWithFormat(This,name,__valueSize,value,format) \
    ( (This)->lpVtbl->AddRectArrayWithFormat(This,name,__valueSize,value,format) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_AddRectArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) \
    ( (This)->lpVtbl->AddRectArrayWithFormatAndTags(This,name,__valueSize,value,format,tags) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptions[] = L"Windows.Foundation.Diagnostics.ILoggingOptions";
/* [object, uuid("90BC7850-0192-4F5D-AC26-006ADACA12D8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Keywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */INT64 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Tags )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Task )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out INT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Task )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */INT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Opcode )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Opcode )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingOpcode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */GUID value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelatedActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelatedActivityId )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_Keywords(This,value) \
    ( (This)->lpVtbl->get_Keywords(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_Keywords(This,value) \
    ( (This)->lpVtbl->put_Keywords(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_Tags(This,value) \
    ( (This)->lpVtbl->get_Tags(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_Tags(This,value) \
    ( (This)->lpVtbl->put_Tags(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_Task(This,value) \
    ( (This)->lpVtbl->get_Task(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_Task(This,value) \
    ( (This)->lpVtbl->put_Task(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_Opcode(This,value) \
    ( (This)->lpVtbl->get_Opcode(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_Opcode(This,value) \
    ( (This)->lpVtbl->put_Opcode(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_ActivityId(This,value) \
    ( (This)->lpVtbl->put_ActivityId(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_get_RelatedActivityId(This,value) \
    ( (This)->lpVtbl->get_RelatedActivityId(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_put_RelatedActivityId(This,value) \
    ( (This)->lpVtbl->put_RelatedActivityId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingOptionsFactory[] = L"Windows.Foundation.Diagnostics.ILoggingOptionsFactory";
/* [object, uuid("D713C6CB-98AB-464B-9F22-A3268478368A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithKeywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory * This,
        /* [in] */INT64 keywords,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_CreateWithKeywords(This,keywords,result) \
    ( (This)->lpVtbl->CreateWithKeywords(This,keywords,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingSession
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
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSession[] = L"Windows.Foundation.Diagnostics.ILoggingSession";
/* [object, uuid("6221F306-9380-4AD7-BAF5-41EA9310D768"), contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToFileAsync )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
        /* [in] */__RPC__in HSTRING fileName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddLoggingChannelWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel maxLevel
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLoggingChannel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingChannel * loggingChannel
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_SaveToFileAsync(This,folder,fileName,operation) \
    ( (This)->lpVtbl->SaveToFileAsync(This,folder,fileName,operation) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_AddLoggingChannel(This,loggingChannel) \
    ( (This)->lpVtbl->AddLoggingChannel(This,loggingChannel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) \
    ( (This)->lpVtbl->AddLoggingChannelWithLevel(This,loggingChannel,maxLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_RemoveLoggingChannel(This,loggingChannel) \
    ( (This)->lpVtbl->RemoveLoggingChannel(This,loggingChannel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.LoggingSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingSessionFactory[] = L"Windows.Foundation.Diagnostics.ILoggingSessionFactory";
/* [object, uuid("4E937EE5-58FD-45E0-8C2F-A132EFF95C1E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSession * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_Create(This,name,result) \
    ( (This)->lpVtbl->Create(This,name,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ILoggingTarget[] = L"Windows.Foundation.Diagnostics.ILoggingTarget";
/* [object, uuid("65F16C35-E388-4E26-B17A-F51CD3A83916"), contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *IsEnabledWithLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *IsEnabledWithLevelAndKeywords )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [in] */INT64 keywords,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogEvent )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING eventName
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogEventWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING eventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogEventWithFieldsAndLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING eventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LogEventWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING eventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartActivity )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING startEventName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartActivityWithFields )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING startEventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartActivityWithFieldsAndLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING startEventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartActivityWithFieldsAndOptions )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget * This,
        /* [in] */__RPC__in HSTRING startEventName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingFields * fields,
        /* [in] */__x_ABI_CWindows_CFoundation_CDiagnostics_CLoggingLevel level,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingActivity * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTargetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_IsEnabled(This,result) \
    ( (This)->lpVtbl->IsEnabled(This,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_IsEnabledWithLevel(This,level,result) \
    ( (This)->lpVtbl->IsEnabledWithLevel(This,level,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_IsEnabledWithLevelAndKeywords(This,level,keywords,result) \
    ( (This)->lpVtbl->IsEnabledWithLevelAndKeywords(This,level,keywords,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_LogEvent(This,eventName) \
    ( (This)->lpVtbl->LogEvent(This,eventName) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_LogEventWithFields(This,eventName,fields) \
    ( (This)->lpVtbl->LogEventWithFields(This,eventName,fields) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_LogEventWithFieldsAndLevel(This,eventName,fields,level) \
    ( (This)->lpVtbl->LogEventWithFieldsAndLevel(This,eventName,fields,level) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_LogEventWithFieldsAndOptions(This,eventName,fields,level,options) \
    ( (This)->lpVtbl->LogEventWithFieldsAndOptions(This,eventName,fields,level,options) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_StartActivity(This,startEventName,result) \
    ( (This)->lpVtbl->StartActivity(This,startEventName,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_StartActivityWithFields(This,startEventName,fields,result) \
    ( (This)->lpVtbl->StartActivityWithFields(This,startEventName,fields,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_StartActivityWithFieldsAndLevel(This,startEventName,fields,level,result) \
    ( (This)->lpVtbl->StartActivityWithFieldsAndLevel(This,startEventName,fields,level,result) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_StartActivityWithFieldsAndOptions(This,startEventName,fields,level,options,result) \
    ( (This)->lpVtbl->StartActivityWithFieldsAndOptions(This,startEventName,fields,level,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CILoggingTarget_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Diagnostics_ITracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs";
/* [object, uuid("410B7711-FF3B-477F-9C9A-D2EFDA302DC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * enabled
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TraceLevel )(
        __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDiagnostics_CCausalityTraceLevel * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl;

interface __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_get_Enabled(This,enabled) \
    ( (This)->lpVtbl->get_Enabled(This,enabled) )

#define __x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_get_TraceLevel(This,value) \
    ( (This)->lpVtbl->get_TraceLevel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CFoundation_CDiagnostics_CITracingStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.AsyncCausalityTracer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Foundation.Diagnostics.IAsyncCausalityTracerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_AsyncCausalityTracer_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_AsyncCausalityTracer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer[] = L"Windows.Foundation.Diagnostics.AsyncCausalityTracer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.ErrorDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Foundation.Diagnostics.IErrorDetailsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IErrorDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_ErrorDetails_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_ErrorDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_ErrorDetails[] = L"Windows.Foundation.Diagnostics.ErrorDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.FileLoggingSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.IFileLoggingSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IFileLoggingSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_FileLoggingSession_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_FileLoggingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_FileLoggingSession[] = L"Windows.Foundation.Diagnostics.FileLoggingSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILogFileGeneratedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LogFileGeneratedEventArgs[] = L"Windows.Foundation.Diagnostics.LogFileGeneratedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingActivity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingActivityFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingActivity ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.Diagnostics.ILoggingActivity2
 *    Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingActivity_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingActivity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingActivity[] = L"Windows.Foundation.Diagnostics.LoggingActivity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingChannel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingChannel ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Foundation.Diagnostics.ILoggingChannel2
 *    Windows.Foundation.Diagnostics.ILoggingTarget
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannel_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannel[] = L"Windows.Foundation.Diagnostics.LoggingChannel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingChannelOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingChannelOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingChannelOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannelOptions_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingChannelOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingChannelOptions[] = L"Windows.Foundation.Diagnostics.LoggingChannelOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingFields
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingFields ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingFields_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingFields_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingFields[] = L"Windows.Foundation.Diagnostics.LoggingFields";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingOptions_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingOptions[] = L"Windows.Foundation.Diagnostics.LoggingOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.LoggingSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Foundation.Diagnostics.ILoggingSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ILoggingSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingSession_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_LoggingSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_LoggingSession[] = L"Windows.Foundation.Diagnostics.LoggingSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.IErrorReportingSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings[] = L"Windows.Foundation.Diagnostics.RuntimeBrokerErrorSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Diagnostics.ITracingStatusChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Diagnostics_TracingStatusChangedEventArgs[] = L"Windows.Foundation.Diagnostics.TracingStatusChangedEventArgs";
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
#endif // __windows2Efoundation2Ediagnostics_p_h__

#endif // __windows2Efoundation2Ediagnostics_h__
