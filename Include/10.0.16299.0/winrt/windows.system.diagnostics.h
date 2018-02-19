/* Header file automatically generated from windows.system.diagnostics.idl */
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
#ifndef __windows2Esystem2Ediagnostics_h__
#define __windows2Esystem2Ediagnostics_h__
#ifndef __windows2Esystem2Ediagnostics_p_h__
#define __windows2Esystem2Ediagnostics_p_h__


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
#include "Windows.Data.Json.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IDiagnosticActionResult;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult ABI::Windows::System::Diagnostics::IDiagnosticActionResult

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IDiagnosticInvoker;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker ABI::Windows::System::Diagnostics::IDiagnosticInvoker

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IDiagnosticInvokerStatics;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics ABI::Windows::System::Diagnostics::IDiagnosticInvokerStatics

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessCpuUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage ABI::Windows::System::Diagnostics::IProcessCpuUsage

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessCpuUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport ABI::Windows::System::Diagnostics::IProcessCpuUsageReport

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiagnosticInfo2;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo2

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiagnosticInfoStatics;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics ABI::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiagnosticInfoStatics2;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 ABI::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics2

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiskUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage ABI::Windows::System::Diagnostics::IProcessDiskUsage

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessDiskUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport ABI::Windows::System::Diagnostics::IProcessDiskUsageReport

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessMemoryUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage ABI::Windows::System::Diagnostics::IProcessMemoryUsage

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface IProcessMemoryUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport ABI::Windows::System::Diagnostics::IProcessMemoryUsageReport

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemCpuUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage ABI::Windows::System::Diagnostics::ISystemCpuUsage

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemCpuUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport ABI::Windows::System::Diagnostics::ISystemCpuUsageReport

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo ABI::Windows::System::Diagnostics::ISystemDiagnosticInfo

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemDiagnosticInfoStatics;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics ABI::Windows::System::Diagnostics::ISystemDiagnosticInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemMemoryUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage ABI::Windows::System::Diagnostics::ISystemMemoryUsage

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                interface ISystemMemoryUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport ABI::Windows::System::Diagnostics::ISystemMemoryUsageReport

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#define DEF___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a89b4418-4c3b-5f49-b957-785697c99abf"))
IIterator<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*, ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.System.Diagnostics.ProcessDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t;
#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
//#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#define DEF___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("97b73627-b296-5076-b8cd-6bd8a240e966"))
IIterable<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*, ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.System.Diagnostics.ProcessDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t;
#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
//#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#define DEF___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("74ab2473-9624-5a06-9025-6d91e622bf8e"))
IVectorView<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*, ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.System.Diagnostics.ProcessDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t;
#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
//#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#define DEF___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f62e2d01-c1dd-5b60-b5da-16518cba0bb0"))
IVector<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*, ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.System.Diagnostics.ProcessDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::System::Diagnostics::ProcessDiagnosticInfo*> __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t;
#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo ABI::Windows::Foundation::Collections::IVector<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
//#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class DiagnosticActionResult;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                enum DiagnosticActionState : int;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a0422898-b50a-52e3-b461-53989308be12"))
IAsyncOperationProgressHandler<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::DiagnosticActionResult*, ABI::Windows::System::Diagnostics::IDiagnosticActionResult*>,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.System.Diagnostics.DiagnosticActionResult, Windows.System.Diagnostics.DiagnosticActionState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
//#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("390b0091-caf7-5b64-839d-4990ae7f753c"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::DiagnosticActionResult*, ABI::Windows::System::Diagnostics::IDiagnosticActionResult*>,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.System.Diagnostics.DiagnosticActionResult, Windows.System.Diagnostics.DiagnosticActionState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bb5d493e-74e9-57a1-8c4c-923e0dc4565b"))
IAsyncOperationWithProgress<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::Diagnostics::DiagnosticActionResult*, ABI::Windows::System::Diagnostics::IDiagnosticActionResult*>,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.System.Diagnostics.DiagnosticActionResult, Windows.System.Diagnostics.DiagnosticActionState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::System::Diagnostics::DiagnosticActionResult*,enum ABI::Windows::System::Diagnostics::DiagnosticActionState> __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t;
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
//#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::System::Diagnostics::IDiagnosticActionResult*,ABI::Windows::System::Diagnostics::DiagnosticActionState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



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




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */



#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonValue;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonValue ABI::Windows::Data::Json::IJsonValue

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4deecc89-b0b8-5ee8-a51d-1c25ad9a5b01"))
IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f948eac5-33eb-50f5-b5af-e7cecf0e4501"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dfabb6e1-0411-5a8f-aa87-354e7110f099"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Data.Json.IJsonValue>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Data::Json::IJsonValue*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eecd690c-1ff3-529f-923f-9b1c31fd3d0f"))
IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IMapView_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#define DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c9d9a725-786b-5113-b4b7-9b61764c220b"))
IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*> : IMap_impl<HSTRING,ABI::Windows::Data::Json::IJsonValue*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Data.Json.IJsonValue>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*> __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t;
#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
//#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Data::Json::IJsonValue*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace System {
            class AppDiagnosticInfo;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IAppDiagnosticInfo;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo ABI::Windows::System::IAppDiagnosticInfo

#endif // ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_USE
#define DEF___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("183f1e4a-2224-5fe4-b064-68869c53e361"))
IIterator<ABI::Windows::System::AppDiagnosticInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::AppDiagnosticInfo*, ABI::Windows::System::IAppDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.System.AppDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::System::AppDiagnosticInfo*> __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_t;
#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::IAppDiagnosticInfo*>
//#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::System::IAppDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_USE
#define DEF___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8118de8f-3ae3-55e1-80a8-25453cdba894"))
IIterable<ABI::Windows::System::AppDiagnosticInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::AppDiagnosticInfo*, ABI::Windows::System::IAppDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.System.AppDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::System::AppDiagnosticInfo*> __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_t;
#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::IAppDiagnosticInfo*>
//#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::System::IAppDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_USE
#define DEF___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b0c2c7a4-78ba-50fd-84fe-00e02a6c1d42"))
IVectorView<ABI::Windows::System::AppDiagnosticInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::AppDiagnosticInfo*, ABI::Windows::System::IAppDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.System.AppDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::System::AppDiagnosticInfo*> __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_t;
#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::IAppDiagnosticInfo*>
//#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::System::IAppDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVector_1_Windows__CSystem__CAppDiagnosticInfo_USE
#define DEF___FIVector_1_Windows__CSystem__CAppDiagnosticInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9cffa2c3-7eeb-599c-b94d-c794b11f807f"))
IVector<ABI::Windows::System::AppDiagnosticInfo*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::AppDiagnosticInfo*, ABI::Windows::System::IAppDiagnosticInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.System.AppDiagnosticInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::System::AppDiagnosticInfo*> __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_t;
#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSystem__CAppDiagnosticInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo ABI::Windows::Foundation::Collections::IVector<ABI::Windows::System::IAppDiagnosticInfo*>
//#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::System::IAppDiagnosticInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSystem__CAppDiagnosticInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                class JsonObject;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */

#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Json {
                interface IJsonObject;
            } /* Windows */
        } /* Data */
    } /* Json */} /* ABI */
#define __x_ABI_CWindows_CData_CJson_CIJsonObject ABI::Windows::Data::Json::IJsonObject

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
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
        namespace System {
            namespace Diagnostics {
                
                typedef enum DiagnosticActionState : int DiagnosticActionState;
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */





















namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class DiagnosticInvoker;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessCpuUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessCpuUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessDiskUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessDiskUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessMemoryUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class ProcessMemoryUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class SystemCpuUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class SystemCpuUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class SystemDiagnosticInfo;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class SystemMemoryUsage;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                class SystemMemoryUsageReport;
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */










/*
 *
 * Struct Windows.System.Diagnostics.DiagnosticActionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [v1_enum, contract] */
                enum DiagnosticActionState : int
                {
                    DiagnosticActionState_Initializing = 0,
                    DiagnosticActionState_Downloading = 1,
                    DiagnosticActionState_VerifyingTrust = 2,
                    DiagnosticActionState_Detecting = 3,
                    DiagnosticActionState_Resolving = 4,
                    DiagnosticActionState_VerifyingResolution = 5,
                };
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticActionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticActionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticActionResult[] = L"Windows.System.Diagnostics.IDiagnosticActionResult";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("C265A296-E73B-4097-B28F-3442F03DD831"), exclusiveto, contract] */
                MIDL_INTERFACE("C265A296-E73B-4097-B28F-3442F03DD831")
                IDiagnosticActionResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                        /* [retval, out] */__RPC__out HRESULT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Results(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDiagnosticActionResult=_uuidof(IDiagnosticActionResult);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticInvoker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticInvoker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvoker[] = L"Windows.System.Diagnostics.IDiagnosticInvoker";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("187B270A-02E3-4F86-84FC-FDD892B5940F"), exclusiveto, contract] */
                MIDL_INTERFACE("187B270A-02E3-4F86-84FC-FDD892B5940F")
                IDiagnosticInvoker : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RunDiagnosticActionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Data::Json::IJsonObject * context,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDiagnosticInvoker=_uuidof(IDiagnosticInvoker);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticInvokerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticInvoker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvokerStatics[] = L"Windows.System.Diagnostics.IDiagnosticInvokerStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("5CFAD8DE-F15C-4554-A813-C113C3881B09"), exclusiveto, contract] */
                MIDL_INTERFACE("5CFAD8DE-F15C-4554-A813-C113C3881B09")
                IDiagnosticInvokerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IDiagnosticInvoker * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IDiagnosticInvoker * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDiagnosticInvokerStatics=_uuidof(IDiagnosticInvokerStatics);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessCpuUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsage[] = L"Windows.System.Diagnostics.IProcessCpuUsage";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("0BBB2472-C8BF-423A-A810-B559AE4354E2"), exclusiveto, contract] */
                MIDL_INTERFACE("0BBB2472-C8BF-423A-A810-B559AE4354E2")
                IProcessCpuUsage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessCpuUsageReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessCpuUsage=_uuidof(IProcessCpuUsage);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessCpuUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsageReport[] = L"Windows.System.Diagnostics.IProcessCpuUsageReport";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("8A6D9CAC-3987-4E2F-A119-6B5FA214F1B4"), exclusiveto, contract] */
                MIDL_INTERFACE("8A6D9CAC-3987-4E2F-A119-6B5FA214F1B4")
                IProcessCpuUsageReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KernelTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessCpuUsageReport=_uuidof(IProcessCpuUsageReport);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("E830B04B-300E-4EE6-A0AB-5B5F5231B434"), exclusiveto, contract] */
                MIDL_INTERFACE("E830B04B-300E-4EE6-A0AB-5B5F5231B434")
                IProcessDiagnosticInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessId(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExecutableFileName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Parent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProcessStartTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiskUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessDiskUsage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MemoryUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessMemoryUsage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CpuUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessCpuUsage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiagnosticInfo=_uuidof(IProcessDiagnosticInfo);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("9558CB1A-3D0B-49EC-AB70-4F7A112805DE"), exclusiveto, contract] */
                MIDL_INTERFACE("9558CB1A-3D0B-49EC-AB70-4F7A112805DE")
                IProcessDiagnosticInfo2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAppDiagnosticInfos(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPackaged(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiagnosticInfo2=_uuidof(IProcessDiagnosticInfo2);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("2F41B260-B49F-428C-AA0E-84744F49CA95"), exclusiveto, contract] */
                MIDL_INTERFACE("2F41B260-B49F-428C-AA0E-84744F49CA95")
                IProcessDiagnosticInfoStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForProcesses(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * * processes
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentProcess(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo * * processes
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiagnosticInfoStatics=_uuidof(IProcessDiagnosticInfoStatics);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("4A869897-9899-4A44-A29B-091663BE09B6"), exclusiveto, contract] */
                MIDL_INTERFACE("4A869897-9899-4A44-A29B-091663BE09B6")
                IProcessDiagnosticInfoStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE TryGetForProcessId(
                        /* [in] */UINT32 processId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessDiagnosticInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiagnosticInfoStatics2=_uuidof(IProcessDiagnosticInfoStatics2);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiskUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiskUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsage[] = L"Windows.System.Diagnostics.IProcessDiskUsage";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("5AD78BFD-7E51-4E53-BFAA-5A6EE1AABBF8"), exclusiveto, contract] */
                MIDL_INTERFACE("5AD78BFD-7E51-4E53-BFAA-5A6EE1AABBF8")
                IProcessDiskUsage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessDiskUsageReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiskUsage=_uuidof(IProcessDiskUsage);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiskUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiskUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsageReport[] = L"Windows.System.Diagnostics.IProcessDiskUsageReport";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("401627FD-535D-4C1F-81B8-DA54E1BE635E"), exclusiveto, contract] */
                MIDL_INTERFACE("401627FD-535D-4C1F-81B8-DA54E1BE635E")
                IProcessDiskUsageReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReadOperationCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WriteOperationCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherOperationCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesReadCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesWrittenCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherBytesCount(
                        /* [retval, out] */__RPC__out INT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessDiskUsageReport=_uuidof(IProcessDiskUsageReport);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessMemoryUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsage[] = L"Windows.System.Diagnostics.IProcessMemoryUsage";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("F50B229B-827C-42B7-B07C-0E32627E6B3E"), exclusiveto, contract] */
                MIDL_INTERFACE("F50B229B-827C-42B7-B07C-0E32627E6B3E")
                IProcessMemoryUsage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::IProcessMemoryUsageReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessMemoryUsage=_uuidof(IProcessMemoryUsage);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessMemoryUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.IProcessMemoryUsageReport";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("C2C77CBA-1951-4685-8532-7E749ECF8EEB"), exclusiveto, contract] */
                MIDL_INTERFACE("C2C77CBA-1951-4685-8532-7E749ECF8EEB")
                IProcessMemoryUsageReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NonPagedPoolSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageFaultCount(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageFileSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PagedPoolSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeakNonPagedPoolSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeakPageFileSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeakPagedPoolSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeakVirtualMemorySizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeakWorkingSetSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrivatePageCount(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VirtualMemorySizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WorkingSetSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProcessMemoryUsageReport=_uuidof(IProcessMemoryUsageReport);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemCpuUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsage[] = L"Windows.System.Diagnostics.ISystemCpuUsage";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("6037B3AC-02D6-4234-8362-7FE3ADC81F5F"), exclusiveto, contract] */
                MIDL_INTERFACE("6037B3AC-02D6-4234-8362-7FE3ADC81F5F")
                ISystemCpuUsage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::ISystemCpuUsageReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemCpuUsage=_uuidof(ISystemCpuUsage);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemCpuUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsageReport[] = L"Windows.System.Diagnostics.ISystemCpuUsageReport";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("2C26D0B2-9483-4F62-AB57-82B29D9719B8"), exclusiveto, contract] */
                MIDL_INTERFACE("2C26D0B2-9483-4F62-AB57-82B29D9719B8")
                ISystemCpuUsageReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KernelTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IdleTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemCpuUsageReport=_uuidof(ISystemCpuUsageReport);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfo[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("A290FE05-DFF3-407F-9A1B-0B2B317CA800"), exclusiveto, contract] */
                MIDL_INTERFACE("A290FE05-DFF3-407F-9A1B-0B2B317CA800")
                ISystemDiagnosticInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MemoryUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::ISystemMemoryUsage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CpuUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::ISystemCpuUsage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemDiagnosticInfo=_uuidof(ISystemDiagnosticInfo);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemDiagnosticInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("D404AC21-FC7D-45F0-9A3F-39203AED9F7E"), exclusiveto, contract] */
                MIDL_INTERFACE("D404AC21-FC7D-45F0-9A3F-39203AED9F7E")
                ISystemDiagnosticInfoStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentSystem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::ISystemDiagnosticInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemDiagnosticInfoStatics=_uuidof(ISystemDiagnosticInfoStatics);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemMemoryUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsage[] = L"Windows.System.Diagnostics.ISystemMemoryUsage";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("17FFC595-1702-49CF-AA27-2F0A32591404"), exclusiveto, contract] */
                MIDL_INTERFACE("17FFC595-1702-49CF-AA27-2F0A32591404")
                ISystemMemoryUsage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::ISystemMemoryUsageReport * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemMemoryUsage=_uuidof(ISystemMemoryUsage);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemMemoryUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsageReport[] = L"Windows.System.Diagnostics.ISystemMemoryUsageReport";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                /* [object, uuid("38663C87-2A9F-403A-BD19-2CF3E8169500"), exclusiveto, contract] */
                MIDL_INTERFACE("38663C87-2A9F-403A-BD19-2CF3E8169500")
                ISystemMemoryUsageReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TotalPhysicalSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CommittedSizeInBytes(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISystemMemoryUsageReport=_uuidof(ISystemMemoryUsageReport);
                
            } /* Windows */
        } /* System */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.DiagnosticActionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IDiagnosticActionResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticActionResult_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticActionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticActionResult[] = L"Windows.System.Diagnostics.DiagnosticActionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.System.Diagnostics.DiagnosticInvoker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.IDiagnosticInvokerStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IDiagnosticInvoker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticInvoker_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticInvoker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticInvoker[] = L"Windows.System.Diagnostics.DiagnosticInvoker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.System.Diagnostics.ProcessCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessCpuUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsage[] = L"Windows.System.Diagnostics.ProcessCpuUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessCpuUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsageReport[] = L"Windows.System.Diagnostics.ProcessCpuUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.Diagnostics.IProcessDiagnosticInfoStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiagnosticInfo ** Default Interface **
 *    Windows.System.Diagnostics.IProcessDiagnosticInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiagnosticInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiagnosticInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.ProcessDiagnosticInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiskUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiskUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsage[] = L"Windows.System.Diagnostics.ProcessDiskUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiskUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiskUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsageReport[] = L"Windows.System.Diagnostics.ProcessDiskUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessMemoryUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsage[] = L"Windows.System.Diagnostics.ProcessMemoryUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessMemoryUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.ProcessMemoryUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.SystemCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemCpuUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsage[] = L"Windows.System.Diagnostics.SystemCpuUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemCpuUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsageReport[] = L"Windows.System.Diagnostics.SystemCpuUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.ISystemDiagnosticInfoStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemDiagnosticInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemDiagnosticInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemDiagnosticInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemDiagnosticInfo[] = L"Windows.System.Diagnostics.SystemDiagnosticInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemMemoryUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsage[] = L"Windows.System.Diagnostics.SystemMemoryUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemMemoryUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsageReport[] = L"Windows.System.Diagnostics.SystemMemoryUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

typedef struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;

interface __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

typedef  struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;

interface __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

typedef struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [in] */ __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;

interface __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo;

typedef struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This, /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * *value);

    END_INTERFACE
} __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl;

interface __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState;
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


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


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonValue __x_ABI_CWindows_CData_CJson_CIJsonValue;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonValue_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue;

typedef struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CData__CJson__CIJsonValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonValue * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl;

interface __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValueVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CData__CJson__CIJsonValue_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo;

#endif // ____x_ABI_CWindows_CSystem_CIAppDiagnosticInfo_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CAppDiagnosticInfo;

typedef struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl;

interface __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CAppDiagnosticInfo;

typedef  struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CAppDiagnosticInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl;

interface __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo;

typedef struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [in] */ __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl;

interface __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVector_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo __FIVector_1_Windows__CSystem__CAppDiagnosticInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSystem__CAppDiagnosticInfo;

typedef struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CAppDiagnosticInfo **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This, /* [in] */ __RPC__in __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CSystem_CIAppDiagnosticInfo * *value);

    END_INTERFACE
} __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl;

interface __FIVector_1_Windows__CSystem__CAppDiagnosticInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CSystem__CAppDiagnosticInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSystem__CAppDiagnosticInfo_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSystem__CAppDiagnosticInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CJson_CIJsonObject __x_ABI_CWindows_CData_CJson_CIJsonObject;

#endif // ____x_ABI_CWindows_CData_CJson_CIJsonObject_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState;










































/*
 *
 * Struct Windows.System.Diagnostics.DiagnosticActionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CDiagnostics_CDiagnosticActionState
{
    DiagnosticActionState_Initializing = 0,
    DiagnosticActionState_Downloading = 1,
    DiagnosticActionState_VerifyingTrust = 2,
    DiagnosticActionState_Detecting = 3,
    DiagnosticActionState_Resolving = 4,
    DiagnosticActionState_VerifyingResolution = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticActionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticActionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticActionResult[] = L"Windows.System.Diagnostics.IDiagnosticActionResult";
/* [object, uuid("C265A296-E73B-4097-B28F-3442F03DD831"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Results )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_get_Results(This,value) \
    ( (This)->lpVtbl->get_Results(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticActionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticInvoker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticInvoker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvoker[] = L"Windows.System.Diagnostics.IDiagnosticInvoker";
/* [object, uuid("187B270A-02E3-4F86-84FC-FDD892B5940F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RunDiagnosticActionAsync )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CJson_CIJsonObject * context,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CSystem__CDiagnostics__CDiagnosticActionResult_Windows__CSystem__CDiagnostics__CDiagnosticActionState * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_RunDiagnosticActionAsync(This,context,operation) \
    ( (This)->lpVtbl->RunDiagnosticActionAsync(This,context,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IDiagnosticInvokerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.DiagnosticInvoker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IDiagnosticInvokerStatics[] = L"Windows.System.Diagnostics.IDiagnosticInvokerStatics";
/* [object, uuid("5CFAD8DE-F15C-4554-A813-C113C3881B09"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvoker * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_GetForUser(This,user,result) \
    ( (This)->lpVtbl->GetForUser(This,user,result) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_get_IsSupported(This,value) \
    ( (This)->lpVtbl->get_IsSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIDiagnosticInvokerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessCpuUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsage[] = L"Windows.System.Diagnostics.IProcessCpuUsage";
/* [object, uuid("0BBB2472-C8BF-423A-A810-B559AE4354E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_GetReport(This,value) \
    ( (This)->lpVtbl->GetReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessCpuUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessCpuUsageReport[] = L"Windows.System.Diagnostics.IProcessCpuUsageReport";
/* [object, uuid("8A6D9CAC-3987-4E2F-A119-6B5FA214F1B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KernelTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_get_KernelTime(This,value) \
    ( (This)->lpVtbl->get_KernelTime(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_get_UserTime(This,value) \
    ( (This)->lpVtbl->get_UserTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo";
/* [object, uuid("E830B04B-300E-4EE6-A0AB-5B5F5231B434"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessId )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExecutableFileName )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProcessStartTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiskUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MemoryUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CpuUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessCpuUsage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_ProcessId(This,value) \
    ( (This)->lpVtbl->get_ProcessId(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_ExecutableFileName(This,value) \
    ( (This)->lpVtbl->get_ExecutableFileName(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_Parent(This,value) \
    ( (This)->lpVtbl->get_Parent(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_ProcessStartTime(This,value) \
    ( (This)->lpVtbl->get_ProcessStartTime(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_DiskUsage(This,value) \
    ( (This)->lpVtbl->get_DiskUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_MemoryUsage(This,value) \
    ( (This)->lpVtbl->get_MemoryUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_get_CpuUsage(This,value) \
    ( (This)->lpVtbl->get_CpuUsage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfo2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfo2";
/* [object, uuid("9558CB1A-3D0B-49EC-AB70-4F7A112805DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppDiagnosticInfos )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSystem__CAppDiagnosticInfo * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPackaged )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_GetAppDiagnosticInfos(This,result) \
    ( (This)->lpVtbl->GetAppDiagnosticInfos(This,result) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_get_IsPackaged(This,value) \
    ( (This)->lpVtbl->get_IsPackaged(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics";
/* [object, uuid("2F41B260-B49F-428C-AA0E-84744F49CA95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForProcesses )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CDiagnostics__CProcessDiagnosticInfo * * processes
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentProcess )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * processes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_GetForProcesses(This,processes) \
    ( (This)->lpVtbl->GetForProcesses(This,processes) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_GetForCurrentProcess(This,processes) \
    ( (This)->lpVtbl->GetForCurrentProcess(This,processes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics2[] = L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2";
/* [object, uuid("4A869897-9899-4A44-A29B-091663BE09B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetForProcessId )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2 * This,
        /* [in] */UINT32 processId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_TryGetForProcessId(This,processId,result) \
    ( (This)->lpVtbl->TryGetForProcessId(This,processId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiagnosticInfoStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiskUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiskUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsage[] = L"Windows.System.Diagnostics.IProcessDiskUsage";
/* [object, uuid("5AD78BFD-7E51-4E53-BFAA-5A6EE1AABBF8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_GetReport(This,value) \
    ( (This)->lpVtbl->GetReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessDiskUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessDiskUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessDiskUsageReport[] = L"Windows.System.Diagnostics.IProcessDiskUsageReport";
/* [object, uuid("401627FD-535D-4C1F-81B8-DA54E1BE635E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReadOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WriteOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OtherOperationCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesReadCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesWrittenCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OtherBytesCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport * This,
        /* [retval, out] */__RPC__out INT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_ReadOperationCount(This,value) \
    ( (This)->lpVtbl->get_ReadOperationCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_WriteOperationCount(This,value) \
    ( (This)->lpVtbl->get_WriteOperationCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_OtherOperationCount(This,value) \
    ( (This)->lpVtbl->get_OtherOperationCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_BytesReadCount(This,value) \
    ( (This)->lpVtbl->get_BytesReadCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_BytesWrittenCount(This,value) \
    ( (This)->lpVtbl->get_BytesWrittenCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_get_OtherBytesCount(This,value) \
    ( (This)->lpVtbl->get_OtherBytesCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessDiskUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessMemoryUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsage[] = L"Windows.System.Diagnostics.IProcessMemoryUsage";
/* [object, uuid("F50B229B-827C-42B7-B07C-0E32627E6B3E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_GetReport(This,value) \
    ( (This)->lpVtbl->GetReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.IProcessMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.ProcessMemoryUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_IProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.IProcessMemoryUsageReport";
/* [object, uuid("C2C77CBA-1951-4685-8532-7E749ECF8EEB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NonPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageFaultCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageFileSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeakNonPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeakPageFileSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeakPagedPoolSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeakVirtualMemorySizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeakWorkingSetSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrivatePageCount )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VirtualMemorySizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WorkingSetSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_NonPagedPoolSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_NonPagedPoolSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PageFaultCount(This,value) \
    ( (This)->lpVtbl->get_PageFaultCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PageFileSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PageFileSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PagedPoolSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PagedPoolSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PeakNonPagedPoolSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PeakNonPagedPoolSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PeakPageFileSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PeakPageFileSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PeakPagedPoolSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PeakPagedPoolSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PeakVirtualMemorySizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PeakVirtualMemorySizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PeakWorkingSetSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_PeakWorkingSetSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_PrivatePageCount(This,value) \
    ( (This)->lpVtbl->get_PrivatePageCount(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_VirtualMemorySizeInBytes(This,value) \
    ( (This)->lpVtbl->get_VirtualMemorySizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_get_WorkingSetSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_WorkingSetSizeInBytes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CIProcessMemoryUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemCpuUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsage[] = L"Windows.System.Diagnostics.ISystemCpuUsage";
/* [object, uuid("6037B3AC-02D6-4234-8362-7FE3ADC81F5F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_GetReport(This,value) \
    ( (This)->lpVtbl->GetReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemCpuUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemCpuUsageReport[] = L"Windows.System.Diagnostics.ISystemCpuUsageReport";
/* [object, uuid("2C26D0B2-9483-4F62-AB57-82B29D9719B8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KernelTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IdleTime )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_get_KernelTime(This,value) \
    ( (This)->lpVtbl->get_KernelTime(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_get_UserTime(This,value) \
    ( (This)->lpVtbl->get_UserTime(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_get_IdleTime(This,value) \
    ( (This)->lpVtbl->get_IdleTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfo[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfo";
/* [object, uuid("A290FE05-DFF3-407F-9A1B-0B2B317CA800"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MemoryUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CpuUsage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemCpuUsage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_get_MemoryUsage(This,value) \
    ( (This)->lpVtbl->get_MemoryUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_get_CpuUsage(This,value) \
    ( (This)->lpVtbl->get_CpuUsage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemDiagnosticInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics[] = L"Windows.System.Diagnostics.ISystemDiagnosticInfoStatics";
/* [object, uuid("D404AC21-FC7D-45F0-9A3F-39203AED9F7E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentSystem )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_GetForCurrentSystem(This,value) \
    ( (This)->lpVtbl->GetForCurrentSystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemDiagnosticInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemMemoryUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsage[] = L"Windows.System.Diagnostics.ISystemMemoryUsage";
/* [object, uuid("17FFC595-1702-49CF-AA27-2F0A32591404"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_GetReport(This,value) \
    ( (This)->lpVtbl->GetReport(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.ISystemMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.SystemMemoryUsageReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_ISystemMemoryUsageReport[] = L"Windows.System.Diagnostics.ISystemMemoryUsageReport";
/* [object, uuid("38663C87-2A9F-403A-BD19-2CF3E8169500"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TotalPhysicalSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CommittedSizeInBytes )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_get_TotalPhysicalSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_TotalPhysicalSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_get_AvailableSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_AvailableSizeInBytes(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_get_CommittedSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_CommittedSizeInBytes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CISystemMemoryUsageReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.DiagnosticActionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IDiagnosticActionResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticActionResult_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticActionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticActionResult[] = L"Windows.System.Diagnostics.DiagnosticActionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.System.Diagnostics.DiagnosticInvoker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.IDiagnosticInvokerStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IDiagnosticInvoker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticInvoker_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_DiagnosticInvoker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DiagnosticInvoker[] = L"Windows.System.Diagnostics.DiagnosticInvoker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.System.Diagnostics.ProcessCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessCpuUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsage[] = L"Windows.System.Diagnostics.ProcessCpuUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessCpuUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessCpuUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessCpuUsageReport[] = L"Windows.System.Diagnostics.ProcessCpuUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.IProcessDiagnosticInfoStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.System.Diagnostics.IProcessDiagnosticInfoStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiagnosticInfo ** Default Interface **
 *    Windows.System.Diagnostics.IProcessDiagnosticInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiagnosticInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiagnosticInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiagnosticInfo[] = L"Windows.System.Diagnostics.ProcessDiagnosticInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiskUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiskUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsage[] = L"Windows.System.Diagnostics.ProcessDiskUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessDiskUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessDiskUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessDiskUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessDiskUsageReport[] = L"Windows.System.Diagnostics.ProcessDiskUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessMemoryUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsage[] = L"Windows.System.Diagnostics.ProcessMemoryUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.ProcessMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.IProcessMemoryUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_ProcessMemoryUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_ProcessMemoryUsageReport[] = L"Windows.System.Diagnostics.ProcessMemoryUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Diagnostics.SystemCpuUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemCpuUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsage[] = L"Windows.System.Diagnostics.SystemCpuUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemCpuUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemCpuUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemCpuUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemCpuUsageReport[] = L"Windows.System.Diagnostics.SystemCpuUsageReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemDiagnosticInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.ISystemDiagnosticInfoStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemDiagnosticInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemDiagnosticInfo_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemDiagnosticInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemDiagnosticInfo[] = L"Windows.System.Diagnostics.SystemDiagnosticInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemMemoryUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemMemoryUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsage_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsage[] = L"Windows.System.Diagnostics.SystemMemoryUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.SystemMemoryUsageReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.ISystemMemoryUsageReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsageReport_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_SystemMemoryUsageReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_SystemMemoryUsageReport[] = L"Windows.System.Diagnostics.SystemMemoryUsageReport";
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
#endif // __windows2Esystem2Ediagnostics_p_h__

#endif // __windows2Esystem2Ediagnostics_h__
