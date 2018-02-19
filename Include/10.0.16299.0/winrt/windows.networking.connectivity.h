/* Header file automatically generated from windows.networking.connectivity.idl */
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
#ifndef __windows2Enetworking2Econnectivity_h__
#define __windows2Enetworking2Econnectivity_h__
#ifndef __windows2Enetworking2Econnectivity_p_h__
#define __windows2Enetworking2Econnectivity_p_h__


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
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkStatusChangedEventHandler;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler ABI::Windows::Networking::Connectivity::INetworkStatusChangedEventHandler

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IAttributedNetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface ICellularApnContext;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext ABI::Windows::Networking::Connectivity::ICellularApnContext

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionCost;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost ABI::Windows::Networking::Connectivity::IConnectionCost

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionCost2;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 ABI::Windows::Networking::Connectivity::IConnectionCost2

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfile;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile ABI::Windows::Networking::Connectivity::IConnectionProfile

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfile2;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 ABI::Windows::Networking::Connectivity::IConnectionProfile2

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfile3;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 ABI::Windows::Networking::Connectivity::IConnectionProfile3

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfile4;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 ABI::Windows::Networking::Connectivity::IConnectionProfile4

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfileFilter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter ABI::Windows::Networking::Connectivity::IConnectionProfileFilter

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionProfileFilter2;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 ABI::Windows::Networking::Connectivity::IConnectionProfileFilter2

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectionSession;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession ABI::Windows::Networking::Connectivity::IConnectionSession

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectivityInterval;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval ABI::Windows::Networking::Connectivity::IConnectivityInterval

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IConnectivityManagerStatics;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics ABI::Windows::Networking::Connectivity::IConnectivityManagerStatics

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IDataPlanStatus;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus ABI::Windows::Networking::Connectivity::IDataPlanStatus

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IDataPlanUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage ABI::Windows::Networking::Connectivity::IDataPlanUsage

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IDataUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage ABI::Windows::Networking::Connectivity::IDataUsage

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IIPInformation;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation ABI::Windows::Networking::Connectivity::IIPInformation

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface ILanIdentifier;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier ABI::Windows::Networking::Connectivity::ILanIdentifier

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface ILanIdentifierData;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData ABI::Windows::Networking::Connectivity::ILanIdentifierData

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkAdapter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter ABI::Windows::Networking::Connectivity::INetworkAdapter

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkInformationStatics;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics ABI::Windows::Networking::Connectivity::INetworkInformationStatics

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkInformationStatics2;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 ABI::Windows::Networking::Connectivity::INetworkInformationStatics2

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkItem;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem ABI::Windows::Networking::Connectivity::INetworkItem

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkSecuritySettings;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings ABI::Windows::Networking::Connectivity::INetworkSecuritySettings

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkStateChangeEventDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails ABI::Windows::Networking::Connectivity::INetworkStateChangeEventDetails

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkStateChangeEventDetails2;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 ABI::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface INetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage ABI::Windows::Networking::Connectivity::INetworkUsage

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IProviderNetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage ABI::Windows::Networking::Connectivity::IProviderNetworkUsage

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IProxyConfiguration;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration ABI::Windows::Networking::Connectivity::IProxyConfiguration

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IRoutePolicy;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy ABI::Windows::Networking::Connectivity::IRoutePolicy

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IRoutePolicyFactory;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory ABI::Windows::Networking::Connectivity::IRoutePolicyFactory

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IWlanConnectionProfileDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails ABI::Windows::Networking::Connectivity::IWlanConnectionProfileDetails

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                interface IWwanConnectionProfileDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails ABI::Windows::Networking::Connectivity::IWwanConnectionProfileDetails

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class AttributedNetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4070c40f-ab2f-56f2-b54c-8232ae86aacd"))
IIterator<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*, ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.AttributedNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d061dcb9-6854-5ef9-8e03-008a7a704c48"))
IIterable<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*, ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.AttributedNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ConnectionProfile;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("89913732-a08b-5cb2-af16-bbbb2223839e"))
IIterator<ABI::Windows::Networking::Connectivity::ConnectionProfile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionProfile*, ABI::Windows::Networking::Connectivity::IConnectionProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.ConnectionProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::ConnectionProfile*> __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("34dabef9-87d0-5b1c-a7ac-9d290adeb0c8"))
IIterable<ABI::Windows::Networking::Connectivity::ConnectionProfile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionProfile*, ABI::Windows::Networking::Connectivity::IConnectionProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.ConnectionProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::ConnectionProfile*> __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ConnectivityInterval;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("741cea48-651c-5fd9-931e-4f91b521e182"))
IIterator<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectivityInterval*, ABI::Windows::Networking::Connectivity::IConnectivityInterval*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.ConnectivityInterval>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("58051a8b-b259-5414-9b9a-caa0789e833e"))
IIterable<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectivityInterval*, ABI::Windows::Networking::Connectivity::IConnectivityInterval*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.ConnectivityInterval>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class LanIdentifier;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2c5d2f7e-ce9c-5253-a0f4-01e5bdc11988"))
IIterator<ABI::Windows::Networking::Connectivity::LanIdentifier*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::LanIdentifier*, ABI::Windows::Networking::Connectivity::ILanIdentifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.LanIdentifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::LanIdentifier*> __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("accef3cd-5d92-5c01-8ac4-79fe74cd733e"))
IIterable<ABI::Windows::Networking::Connectivity::LanIdentifier*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::LanIdentifier*, ABI::Windows::Networking::Connectivity::ILanIdentifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.LanIdentifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::LanIdentifier*> __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5fafb57b-9c82-50a1-9970-69f9cb069695"))
IIterator<ABI::Windows::Networking::Connectivity::NetworkUsage*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::NetworkUsage*, ABI::Windows::Networking::Connectivity::INetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.NetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::NetworkUsage*> __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::INetworkUsage*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::INetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dd2656b1-8360-5772-b272-c47f7f0fc7a6"))
IIterable<ABI::Windows::Networking::Connectivity::NetworkUsage*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::NetworkUsage*, ABI::Windows::Networking::Connectivity::INetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.NetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::NetworkUsage*> __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::INetworkUsage*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::INetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ProviderNetworkUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#define DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7090752-ab5f-506f-8f15-56b37552fbea"))
IIterator<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*, ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.Connectivity.ProviderNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t;
#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
//#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#define DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f79bc7ba-01df-51ec-bfaf-fd883f698e07"))
IIterable<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*, ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.Connectivity.ProviderNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t;
#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
//#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6e7c44ad-7753-5437-9f79-970d391ff7c4"))
IVectorView<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*, ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.AttributedNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::AttributedNetworkUsage*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6db1b492-3852-5df8-a29d-6944002f58d4"))
IVectorView<ABI::Windows::Networking::Connectivity::ConnectionProfile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionProfile*, ABI::Windows::Networking::Connectivity::IConnectionProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectionProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::ConnectionProfile*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a3d0d117-9e21-5919-b7a0-c8190bd55ac5"))
IVectorView<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectivityInterval*, ABI::Windows::Networking::Connectivity::IConnectivityInterval*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectivityInterval>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::ConnectivityInterval*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("41286159-b91d-5736-ad8b-e16fcf8aced0"))
IVectorView<ABI::Windows::Networking::Connectivity::LanIdentifier*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::LanIdentifier*, ABI::Windows::Networking::Connectivity::ILanIdentifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.LanIdentifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::LanIdentifier*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::ILanIdentifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b3853391-40b6-5cf5-8f46-4882691d1ff7"))
IVectorView<ABI::Windows::Networking::Connectivity::NetworkUsage*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::NetworkUsage*, ABI::Windows::Networking::Connectivity::INetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.NetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::NetworkUsage*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e66ad09c-eb37-54c7-9b2d-734e0e939305"))
IVectorView<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*, ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ProviderNetworkUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::Connectivity::ProviderNetworkUsage*> __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t;
#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
//#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("96af15cc-f060-5667-9223-e054d14239ec"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.AttributedNetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9d8a4113-e7f3-552d-9a8c-1c25e2137253"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.AttributedNetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IAttributedNetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c523d9dd-4ea6-5115-80e9-4e7ad4769798"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectionProfile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c0023294-c2cb-52f0-a9f4-21916032f69d"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectionProfile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectionProfile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b475014c-95f1-5310-b5d1-c2309d944440"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectivityInterval>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("af96d70b-41c7-5dc6-9895-ea043a885d8d"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ConnectivityInterval>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IConnectivityInterval*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e31d7e7e-4173-5c71-b04b-a09658002590"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.NetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("05c9e081-6229-5049-8eea-a498407c00d5"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.NetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::INetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c310276b-3932-5da9-9a3b-c5c423586b42"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ProviderNetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7eba5a8f-e4fd-5201-a4f4-9567596f213c"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.Connectivity.ProviderNetworkUsage>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::Connectivity::IProviderNetworkUsage*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e4f0c96a-0571-59f4-a9a9-afac3e61caa0"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ConnectionProfile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionProfile*, ABI::Windows::Networking::Connectivity::IConnectionProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Connectivity.ConnectionProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ConnectionProfile*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5bf519ca-8adb-5ab5-abb8-ff1bbe5d2de8"))
IAsyncOperation<ABI::Windows::Networking::Connectivity::ConnectionProfile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionProfile*, ABI::Windows::Networking::Connectivity::IConnectionProfile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Connectivity.ConnectionProfile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::Connectivity::ConnectionProfile*> __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IConnectionProfile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ConnectionSession;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bc680d8-9e83-5086-8f49-7a29bfb1c7e1"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ConnectionSession*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionSession*, ABI::Windows::Networking::Connectivity::IConnectionSession*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Connectivity.ConnectionSession>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ConnectionSession*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IConnectionSession*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IConnectionSession*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("94fc6211-4702-5d24-81bf-170ca7818995"))
IAsyncOperation<ABI::Windows::Networking::Connectivity::ConnectionSession*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ConnectionSession*, ABI::Windows::Networking::Connectivity::IConnectionSession*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Connectivity.ConnectionSession>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::Connectivity::ConnectionSession*> __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IConnectionSession*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IConnectionSession*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ProxyConfiguration;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("035b2567-efb9-5bc3-b609-f9a8c20b7001"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ProxyConfiguration*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ProxyConfiguration*, ABI::Windows::Networking::Connectivity::IProxyConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Connectivity.ProxyConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::ProxyConfiguration*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IProxyConfiguration*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Connectivity::IProxyConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e7651f6-6562-59c7-9af3-8756636eeee2"))
IAsyncOperation<ABI::Windows::Networking::Connectivity::ProxyConfiguration*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Connectivity::ProxyConfiguration*, ABI::Windows::Networking::Connectivity::IProxyConfiguration*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Connectivity.ProxyConfiguration>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::Connectivity::ProxyConfiguration*> __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IProxyConfiguration*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Connectivity::IProxyConfiguration*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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




#ifndef DEF___FIReference_1_GUID_USE
#define DEF___FIReference_1_GUID_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7d50f649-632c-51f9-849a-ee49428933ea"))
IReference<GUID> : IReference_impl<GUID> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Guid>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<GUID> __FIReference_1_GUID_t;
#define __FIReference_1_GUID ABI::Windows::Foundation::__FIReference_1_GUID_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_GUID ABI::Windows::Foundation::IReference<GUID>
//#define __FIReference_1_GUID_t ABI::Windows::Foundation::IReference<GUID>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_GUID_USE */




#ifndef DEF___FIReference_1_byte_USE
#define DEF___FIReference_1_byte_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e5198cc8-2873-55f5-b0a1-84ff9e4aad62"))
IReference<byte> : IReference_impl<byte> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt8>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<byte> __FIReference_1_byte_t;
#define __FIReference_1_byte ABI::Windows::Foundation::__FIReference_1_byte_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_byte ABI::Windows::Foundation::IReference<BYTE>
//#define __FIReference_1_byte_t ABI::Windows::Foundation::IReference<BYTE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_byte_USE */




#ifndef DEF___FIReference_1_boolean_USE
#define DEF___FIReference_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c00fd60-2950-5939-a21a-2d12c5a01b8a"))
IReference<bool> : IReference_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<bool> __FIReference_1_boolean_t;
#define __FIReference_1_boolean ABI::Windows::Foundation::__FIReference_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_boolean ABI::Windows::Foundation::IReference<boolean>
//#define __FIReference_1_boolean_t ABI::Windows::Foundation::IReference<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_boolean_USE */




#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */




#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT64 ABI::Windows::Foundation::IReference<UINT64>
//#define __FIReference_1_UINT64_t ABI::Windows::Foundation::IReference<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT64_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */




#ifndef DEF___FIIterator_1_byte_USE
#define DEF___FIIterator_1_byte_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("40556131-a2a1-5fab-aaee-5f35268ca26b"))
IIterator<byte> : IIterator_impl<byte> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<UInt8>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<byte> __FIIterator_1_byte_t;
#define __FIIterator_1_byte ABI::Windows::Foundation::Collections::__FIIterator_1_byte_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_byte ABI::Windows::Foundation::Collections::IIterator<BYTE>
//#define __FIIterator_1_byte_t ABI::Windows::Foundation::Collections::IIterator<BYTE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_byte_USE */




#ifndef DEF___FIIterable_1_byte_USE
#define DEF___FIIterable_1_byte_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("88318266-f3fd-50fc-8f08-b823a41b60c1"))
IIterable<byte> : IIterable_impl<byte> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<UInt8>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<byte> __FIIterable_1_byte_t;
#define __FIIterable_1_byte ABI::Windows::Foundation::Collections::__FIIterable_1_byte_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_byte ABI::Windows::Foundation::Collections::IIterable<BYTE>
//#define __FIIterable_1_byte_t ABI::Windows::Foundation::Collections::IIterable<BYTE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_byte_USE */




#ifndef DEF___FIVectorView_1_byte_USE
#define DEF___FIVectorView_1_byte_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6d05fb29-7885-544e-9382-a1ad391a3fa4"))
IVectorView<byte> : IVectorView_impl<byte> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<UInt8>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<byte> __FIVectorView_1_byte_t;
#define __FIVectorView_1_byte ABI::Windows::Foundation::Collections::__FIVectorView_1_byte_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_byte ABI::Windows::Foundation::Collections::IVectorView<BYTE>
//#define __FIVectorView_1_byte_t ABI::Windows::Foundation::Collections::IVectorView<BYTE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_byte_USE */



namespace ABI {
    namespace Windows {
        namespace Networking {
            class HostName;
        } /* Windows */
    } /* Networking */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostName;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostName ABI::Windows::Networking::IHostName

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CHostName_USE
#define DEF___FIIterator_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("557bf83c-a428-5dbd-a0fe-05f6ee543d45"))
IIterator<ABI::Windows::Networking::HostName*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::HostName*> __FIIterator_1_Windows__CNetworking__CHostName_t;
#define __FIIterator_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IHostName*>
//#define __FIIterator_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CHostName_USE
#define DEF___FIIterable_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9e5f3ed0-cf1c-5d38-832c-acea6164bf5c"))
IIterable<ABI::Windows::Networking::HostName*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::HostName*> __FIIterable_1_Windows__CNetworking__CHostName_t;
#define __FIIterable_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IHostName*>
//#define __FIIterable_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4706ab1-55a3-5270-afb2-732988fe8227"))
IVectorView<ABI::Windows::Networking::HostName*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::HostName*, ABI::Windows::Networking::IHostName*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::HostName*> __FIVectorView_1_Windows__CNetworking__CHostName_t;
#define __FIVectorView_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CHostName_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CHostName ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IHostName*>
//#define __FIVectorView_1_Windows__CNetworking__CHostName_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IHostName*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CHostName_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            class EndpointPair;
        } /* Windows */
    } /* Networking */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IEndpointPair;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIEndpointPair ABI::Windows::Networking::IEndpointPair

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c899ff9f-e6f5-5673-810c-04e2ff98704f"))
IIterator<ABI::Windows::Networking::EndpointPair*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::EndpointPair*> __FIIterator_1_Windows__CNetworking__CEndpointPair_t;
#define __FIIterator_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IEndpointPair*>
//#define __FIIterator_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7ec83c4-a17b-51bf-8997-aa33b9102dc9"))
IIterable<ABI::Windows::Networking::EndpointPair*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::EndpointPair*> __FIIterable_1_Windows__CNetworking__CEndpointPair_t;
#define __FIIterable_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IEndpointPair*>
//#define __FIIterable_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8780a851-6d48-5006-9288-81f3d7045a96"))
IVectorView<ABI::Windows::Networking::EndpointPair*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::EndpointPair*, ABI::Windows::Networking::IEndpointPair*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::EndpointPair*> __FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>
//#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5"))
IIterator<ABI::Windows::Foundation::Uri*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Foundation::Uri*> __FIIterator_1_Windows__CFoundation__CUri_t;
#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterator_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447"))
IIterable<ABI::Windows::Foundation::Uri*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Foundation::Uri*> __FIIterable_1_Windows__CFoundation__CUri_t;
#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterable_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CUri_USE
#define DEF___FIVectorView_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b8385bd-a2cd-5ff1-bf74-7ea580423e50"))
IVectorView<ABI::Windows::Foundation::Uri*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Foundation::Uri*> __FIVectorView_1_Windows__CFoundation__CUri_t;
#define __FIVectorView_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIVectorView_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CUri_USE */


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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum DomainNameType : int DomainNameType;
            
        } /* Windows */
    } /* Networking */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum HostNameSortOptions : unsigned int HostNameSortOptions;
            
        } /* Windows */
    } /* Networking */} /* ABI */



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference ABI::Windows::Storage::Streams::IRandomAccessStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum CellularApnAuthenticationType : int CellularApnAuthenticationType;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum DataUsageGranularity : int DataUsageGranularity;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum DomainConnectivityLevel : int DomainConnectivityLevel;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum NetworkAuthenticationType : int NetworkAuthenticationType;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum NetworkConnectivityLevel : int NetworkConnectivityLevel;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum NetworkCostType : int NetworkCostType;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum NetworkEncryptionType : int NetworkEncryptionType;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum NetworkTypes : unsigned int NetworkTypes;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum RoamingStates : unsigned int RoamingStates;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum TriStates : int TriStates;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum WwanDataClass : unsigned int WwanDataClass;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef enum WwanNetworkRegistrationState : int WwanNetworkRegistrationState;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                
                typedef struct NetworkUsageStates NetworkUsageStates;
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */




































namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class CellularApnContext;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ConnectionCost;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class ConnectionProfileFilter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class DataPlanStatus;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class DataPlanUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class DataUsage;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class IPInformation;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class LanIdentifierData;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkAdapter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkItem;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkSecuritySettings;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class NetworkStateChangeEventDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class RoutePolicy;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class WlanConnectionProfileDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                class WwanConnectionProfileDetails;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */











/*
 *
 * Struct Windows.Networking.Connectivity.CellularApnAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum CellularApnAuthenticationType : int
                {
                    CellularApnAuthenticationType_None = 0,
                    CellularApnAuthenticationType_Pap = 1,
                    CellularApnAuthenticationType_Chap = 2,
                    CellularApnAuthenticationType_Mschapv2 = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.DataUsageGranularity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum DataUsageGranularity : int
                {
                    DataUsageGranularity_PerMinute = 0,
                    DataUsageGranularity_PerHour = 1,
                    DataUsageGranularity_PerDay = 2,
                    DataUsageGranularity_Total = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.DomainConnectivityLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum DomainConnectivityLevel : int
                {
                    DomainConnectivityLevel_None = 0,
                    DomainConnectivityLevel_Unauthenticated = 1,
                    DomainConnectivityLevel_Authenticated = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum NetworkAuthenticationType : int
                {
                    NetworkAuthenticationType_None = 0,
                    NetworkAuthenticationType_Unknown = 1,
                    NetworkAuthenticationType_Open80211 = 2,
                    NetworkAuthenticationType_SharedKey80211 = 3,
                    NetworkAuthenticationType_Wpa = 4,
                    NetworkAuthenticationType_WpaPsk = 5,
                    NetworkAuthenticationType_WpaNone = 6,
                    NetworkAuthenticationType_Rsna = 7,
                    NetworkAuthenticationType_RsnaPsk = 8,
                    NetworkAuthenticationType_Ihv = 9,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkConnectivityLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum NetworkConnectivityLevel : int
                {
                    NetworkConnectivityLevel_None = 0,
                    NetworkConnectivityLevel_LocalAccess = 1,
                    NetworkConnectivityLevel_ConstrainedInternetAccess = 2,
                    NetworkConnectivityLevel_InternetAccess = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkCostType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum NetworkCostType : int
                {
                    NetworkCostType_Unknown = 0,
                    NetworkCostType_Unrestricted = 1,
                    NetworkCostType_Fixed = 2,
                    NetworkCostType_Variable = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkEncryptionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum NetworkEncryptionType : int
                {
                    NetworkEncryptionType_None = 0,
                    NetworkEncryptionType_Unknown = 1,
                    NetworkEncryptionType_Wep = 2,
                    NetworkEncryptionType_Wep40 = 3,
                    NetworkEncryptionType_Wep104 = 4,
                    NetworkEncryptionType_Tkip = 5,
                    NetworkEncryptionType_Ccmp = 6,
                    NetworkEncryptionType_WpaUseGroup = 7,
                    NetworkEncryptionType_RsnUseGroup = 8,
                    NetworkEncryptionType_Ihv = 9,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, flags, contract] */
                enum NetworkTypes : unsigned int
                {
                    NetworkTypes_None = 0,
                    NetworkTypes_Internet = 0x1,
                    NetworkTypes_PrivateNetwork = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(NetworkTypes)
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.RoamingStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, flags, contract] */
                enum RoamingStates : unsigned int
                {
                    RoamingStates_None = 0,
                    RoamingStates_NotRoaming = 0x1,
                    RoamingStates_Roaming = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(RoamingStates)
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.TriStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum TriStates : int
                {
                    TriStates_DoNotCare = 0,
                    TriStates_No = 1,
                    TriStates_Yes = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.WwanDataClass
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, flags, contract] */
                enum WwanDataClass : unsigned int
                {
                    WwanDataClass_None = 0,
                    WwanDataClass_Gprs = 0x1,
                    WwanDataClass_Edge = 0x2,
                    WwanDataClass_Umts = 0x4,
                    WwanDataClass_Hsdpa = 0x8,
                    WwanDataClass_Hsupa = 0x10,
                    WwanDataClass_LteAdvanced = 0x20,
                    WwanDataClass_Cdma1xRtt = 0x10000,
                    WwanDataClass_Cdma1xEvdo = 0x20000,
                    WwanDataClass_Cdma1xEvdoRevA = 0x40000,
                    WwanDataClass_Cdma1xEvdv = 0x80000,
                    WwanDataClass_Cdma3xRtt = 0x100000,
                    WwanDataClass_Cdma1xEvdoRevB = 0x200000,
                    WwanDataClass_CdmaUmb = 0x400000,
                    WwanDataClass_Custom = 0x80000000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(WwanDataClass)
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.WwanNetworkRegistrationState
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [v1_enum, contract] */
                enum WwanNetworkRegistrationState : int
                {
                    WwanNetworkRegistrationState_None = 0,
                    WwanNetworkRegistrationState_Deregistered = 1,
                    WwanNetworkRegistrationState_Searching = 2,
                    WwanNetworkRegistrationState_Home = 3,
                    WwanNetworkRegistrationState_Roaming = 4,
                    WwanNetworkRegistrationState_Partner = 5,
                    WwanNetworkRegistrationState_Denied = 6,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkUsageStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [contract] */
                struct NetworkUsageStates
                {
                    ABI::Windows::Networking::Connectivity::TriStates Roaming;
                    ABI::Windows::Networking::Connectivity::TriStates Shared;
                };
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Connectivity.NetworkStatusChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("71BA143F-598E-49D0-84EB-8FEBAEDCC195"), contract] */
                MIDL_INTERFACE("71BA143F-598E-49D0-84EB-8FEBAEDCC195")
                INetworkStatusChangedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt IInspectable * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkStatusChangedEventHandler=_uuidof(INetworkStatusChangedEventHandler);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IAttributedNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.AttributedNetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IAttributedNetworkUsage[] = L"Windows.Networking.Connectivity.IAttributedNetworkUsage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("F769B039-ECA2-45EB-ADE1-B0368B756C49"), exclusiveto, contract] */
                MIDL_INTERFACE("F769B039-ECA2-45EB-ADE1-B0368B756C49")
                IAttributedNetworkUsage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesSent(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesReceived(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttributionId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttributionName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttributionThumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAttributedNetworkUsage=_uuidof(IAttributedNetworkUsage);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ICellularApnContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.CellularApnContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ICellularApnContext[] = L"Windows.Networking.Connectivity.ICellularApnContext";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("6FA529F4-EFFD-4542-9AB2-705BBF94943A"), exclusiveto, contract] */
                MIDL_INTERFACE("6FA529F4-EFFD-4542-9AB2-705BBF94943A")
                ICellularApnContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProviderId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessPointName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccessPointName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UserName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Password(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Password(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCompressionEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCompressionEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::CellularApnAuthenticationType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AuthenticationType(
                        /* [in] */ABI::Windows::Networking::Connectivity::CellularApnAuthenticationType value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICellularApnContext=_uuidof(ICellularApnContext);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionCost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionCost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost[] = L"Windows.Networking.Connectivity.IConnectionCost";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("BAD7D829-3416-4B10-A202-BAC0B075BDAE"), exclusiveto, contract] */
                MIDL_INTERFACE("BAD7D829-3416-4B10-A202-BAC0B075BDAE")
                IConnectionCost : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkCostType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkCostType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Roaming(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OverDataLimit(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApproachingDataLimit(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionCost=_uuidof(IConnectionCost);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionCost2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionCost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost2[] = L"Windows.Networking.Connectivity.IConnectionCost2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("8E113A05-E209-4549-BB25-5E0DB691CB05"), exclusiveto, contract] */
                MIDL_INTERFACE("8E113A05-E209-4549-BB25-5E0DB691CB05")
                IConnectionCost2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundDataUsageRestricted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionCost2=_uuidof(IConnectionCost2);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile[] = L"Windows.Networking.Connectivity.IConnectionProfile";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("71BA143C-598E-49D0-84EB-8FEBAEDCC195"), exclusiveto, contract] */
                MIDL_INTERFACE("71BA143C-598E-49D0-84EB-8FEBAEDCC195")
                IConnectionProfile : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProfileName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNetworkConnectivityLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkConnectivityLevel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNetworkNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetConnectionCost(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IConnectionCost * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataPlanStatus(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IDataPlanStatus * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAdapter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE GetLocalUsage(
                        /* [in] */ABI::Windows::Foundation::DateTime StartTime,
                        /* [in] */ABI::Windows::Foundation::DateTime EndTime,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IDataUsage * * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE GetLocalUsagePerRoamingStates(
                        /* [in] */ABI::Windows::Foundation::DateTime StartTime,
                        /* [in] */ABI::Windows::Foundation::DateTime EndTime,
                        /* [in] */ABI::Windows::Networking::Connectivity::RoamingStates States,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IDataUsage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkSecuritySettings(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkSecuritySettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfile=_uuidof(IConnectionProfile);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile2[] = L"Windows.Networking.Connectivity.IConnectionProfile2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("E2045145-4C9F-400C-9150-7EC7D6E2888A"), exclusiveto, contract] */
                MIDL_INTERFACE("E2045145-4C9F-400C-9150-7EC7D6E2888A")
                IConnectionProfile2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWwanConnectionProfile(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWlanConnectionProfile(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WwanConnectionProfileDetails(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IWwanConnectionProfileDetails * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WlanConnectionProfileDetails(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IWlanConnectionProfileDetails * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceProviderGuid(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_GUID * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSignalBars(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDomainConnectivityLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::DomainConnectivityLevel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNetworkUsageAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::DateTime endTime,
                        /* [in] */ABI::Windows::Networking::Connectivity::DataUsageGranularity granularity,
                        /* [in] */ABI::Windows::Networking::Connectivity::NetworkUsageStates states,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetConnectivityIntervalsAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::DateTime endTime,
                        /* [in] */ABI::Windows::Networking::Connectivity::NetworkUsageStates states,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfile2=_uuidof(IConnectionProfile2);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile3[] = L"Windows.Networking.Connectivity.IConnectionProfile3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("578C2528-4CD9-4161-8045-201CFD5B115C"), exclusiveto, contract] */
                MIDL_INTERFACE("578C2528-4CD9-4161-8045-201CFD5B115C")
                IConnectionProfile3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAttributedNetworkUsageAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::DateTime endTime,
                        /* [in] */ABI::Windows::Networking::Connectivity::NetworkUsageStates states,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfile3=_uuidof(IConnectionProfile3);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile4[] = L"Windows.Networking.Connectivity.IConnectionProfile4";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("7A2D42CD-81E0-4AE6-ABED-AB9CA13EB714"), exclusiveto, contract] */
                MIDL_INTERFACE("7A2D42CD-81E0-4AE6-ABED-AB9CA13EB714")
                IConnectionProfile4 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetProviderNetworkUsageAsync(
                        /* [in] */ABI::Windows::Foundation::DateTime startTime,
                        /* [in] */ABI::Windows::Foundation::DateTime endTime,
                        /* [in] */ABI::Windows::Networking::Connectivity::NetworkUsageStates states,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfile4=_uuidof(IConnectionProfile4);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfileFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("204C7CC8-BD2D-4E8D-A4B3-455EC337388A"), exclusiveto, contract] */
                MIDL_INTERFACE("204C7CC8-BD2D-4E8D-A4B3-455EC337388A")
                IConnectionProfileFilter : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsConnected(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsConnected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsWwanConnectionProfile(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWwanConnectionProfile(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsWlanConnectionProfile(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWlanConnectionProfile(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NetworkCostType(
                        /* [in] */ABI::Windows::Networking::Connectivity::NetworkCostType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkCostType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkCostType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServiceProviderGuid(
                        /* [in] */__RPC__in_opt __FIReference_1_GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceProviderGuid(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_GUID * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfileFilter=_uuidof(IConnectionProfileFilter);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfileFilter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter2[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("CD068EE1-C3FC-4FAD-9DDC-593FAA4B7885"), exclusiveto, contract] */
                MIDL_INTERFACE("CD068EE1-C3FC-4FAD-9DDC-593FAA4B7885")
                IConnectionProfileFilter2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRoaming(
                        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRoaming(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsOverDataLimit(
                        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOverDataLimit(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsBackgroundDataUsageRestricted(
                        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBackgroundDataUsageRestricted(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionProfileFilter2=_uuidof(IConnectionProfileFilter2);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionSession[] = L"Windows.Networking.Connectivity.IConnectionSession";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("FF905D4C-F83B-41B0-8A0C-1462D9C56B73"), exclusiveto, contract] */
                MIDL_INTERFACE("FF905D4C-F83B-41B0-8A0C-1462D9C56B73")
                IConnectionSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionProfile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IConnectionProfile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectionSession=_uuidof(IConnectionSession);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectivityInterval
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectivityInterval
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityInterval[] = L"Windows.Networking.Connectivity.IConnectivityInterval";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("4FAA3FFF-6746-4824-A964-EED8E87F8709"), exclusiveto, contract] */
                MIDL_INTERFACE("4FAA3FFF-6746-4824-A964-EED8E87F8709")
                IConnectivityInterval : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * startTime
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * duration
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectivityInterval=_uuidof(IConnectivityInterval);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectivityManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectivityManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityManagerStatics[] = L"Windows.Networking.Connectivity.IConnectivityManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("5120D4B1-4FB1-48B0-AFC9-42E0092A8164"), exclusiveto, contract] */
                MIDL_INTERFACE("5120D4B1-4FB1-48B0-AFC9-42E0092A8164")
                IConnectivityManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AcquireConnectionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::ICellularApnContext * cellularApnContext,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddHttpRoutePolicy(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::IRoutePolicy * routePolicy
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveHttpRoutePolicy(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::IRoutePolicy * routePolicy
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IConnectivityManagerStatics=_uuidof(IConnectivityManagerStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataPlanStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataPlanStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanStatus[] = L"Windows.Networking.Connectivity.IDataPlanStatus";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("977A8B8C-3885-40F3-8851-42CD2BD568BB"), exclusiveto, contract] */
                MIDL_INTERFACE("977A8B8C-3885-40F3-8851-42CD2BD568BB")
                IDataPlanStatus : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataPlanUsage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IDataPlanUsage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataLimitInMegabytes(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboundBitsPerSecond(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundBitsPerSecond(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextBillingCycle(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxTransferSizeInMegabytes(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPlanStatus=_uuidof(IDataPlanStatus);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataPlanUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataPlanUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanUsage[] = L"Windows.Networking.Connectivity.IDataPlanUsage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("B921492D-3B44-47FF-B361-BE59E69ED1B0"), exclusiveto, contract] */
                MIDL_INTERFACE("B921492D-3B44-47FF-B361-BE59E69ED1B0")
                IDataPlanUsage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MegabytesUsed(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastSyncTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPlanUsage=_uuidof(IDataPlanUsage);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataUsage[] = L"Windows.Networking.Connectivity.IDataUsage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("C1431DD3-B146-4D39-B959-0C69B096C512"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("C1431DD3-B146-4D39-B959-0C69B096C512")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IDataUsage : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BytesSent(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BytesReceived(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataUsage=_uuidof(IDataUsage);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IIPInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.IPInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IIPInformation[] = L"Windows.Networking.Connectivity.IIPInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("D85145E0-138F-47D7-9B3A-36BB488CEF33"), exclusiveto, contract] */
                MIDL_INTERFACE("D85145E0-138F-47D7-9B3A-36BB488CEF33")
                IIPInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAdapter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrefixLength(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIPInformation=_uuidof(IIPInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ILanIdentifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.LanIdentifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifier[] = L"Windows.Networking.Connectivity.ILanIdentifier";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("48AA53AA-1108-4546-A6CB-9A74DA4B7BA0"), exclusiveto, contract] */
                MIDL_INTERFACE("48AA53AA-1108-4546-A6CB-9A74DA4B7BA0")
                ILanIdentifier : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InfrastructureId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::ILanIdentifierData * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PortId(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::ILanIdentifierData * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAdapterId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILanIdentifier=_uuidof(ILanIdentifier);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ILanIdentifierData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.LanIdentifierData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifierData[] = L"Windows.Networking.Connectivity.ILanIdentifierData";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("A74E83C3-D639-45BE-A36A-C4E4AEAF6D9B"), exclusiveto, contract] */
                MIDL_INTERFACE("A74E83C3-D639-45BE-A36A-C4E4AEAF6D9B")
                ILanIdentifierData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_byte * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILanIdentifierData=_uuidof(ILanIdentifierData);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkAdapter[] = L"Windows.Networking.Connectivity.INetworkAdapter";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("3B542E03-5388-496C-A8A3-AFFD39AEC2E6"), exclusiveto, contract] */
                MIDL_INTERFACE("3B542E03-5388-496C-A8A3-AFFD39AEC2E6")
                INetworkAdapter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundMaxBitsPerSecond(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboundMaxBitsPerSecond(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IanaInterfaceType(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::INetworkItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAdapterId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetConnectedProfileAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkAdapter=_uuidof(INetworkAdapter);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics[] = L"Windows.Networking.Connectivity.INetworkInformationStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("5074F851-950D-4165-9C15-365619481EEA"), exclusiveto, contract] */
                MIDL_INTERFACE("5074F851-950D-4165-9C15-365619481EEA")
                INetworkInformationStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetConnectionProfiles(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetInternetConnectionProfile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IConnectionProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetLanIdentifiers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHostNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProxyConfigurationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSortedEndpointPairs(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CEndpointPair * destinationList,
                        /* [in] */ABI::Windows::Networking::HostNameSortOptions sortOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NetworkStatusChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkStatusChangedEventHandler  * networkStatusHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NetworkStatusChanged(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkInformationStatics=_uuidof(INetworkInformationStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkInformationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics2[] = L"Windows.Networking.Connectivity.INetworkInformationStatics2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("459CED14-2832-49B6-BA6E-E265F04786A8"), exclusiveto, contract] */
                MIDL_INTERFACE("459CED14-2832-49B6-BA6E-E265F04786A8")
                INetworkInformationStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FindConnectionProfilesAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::IConnectionProfileFilter * pProfileFilter,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkInformationStatics2=_uuidof(INetworkInformationStatics2);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkItem[] = L"Windows.Networking.Connectivity.INetworkItem";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("01BC4D39-F5E0-4567-A28C-42080C831B2B"), exclusiveto, contract] */
                MIDL_INTERFACE("01BC4D39-F5E0-4567-A28C-42080C831B2B")
                INetworkItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNetworkTypes(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkTypes * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkItem=_uuidof(INetworkItem);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkSecuritySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkSecuritySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkSecuritySettings[] = L"Windows.Networking.Connectivity.INetworkSecuritySettings";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("7CA07E8D-917B-4B5F-B84D-28F7A5AC5402"), exclusiveto, contract] */
                MIDL_INTERFACE("7CA07E8D-917B-4B5F-B84D-28F7A5AC5402")
                INetworkSecuritySettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkAuthenticationType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkAuthenticationType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkEncryptionType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::NetworkEncryptionType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkSecuritySettings=_uuidof(INetworkSecuritySettings);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkStateChangeEventDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("1F0CF333-D7A6-44DD-A4E9-687C476B903D"), exclusiveto, contract] */
                MIDL_INTERFACE("1F0CF333-D7A6-44DD-A4E9-687C476B903D")
                INetworkStateChangeEventDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewInternetConnectionProfile(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewConnectionCost(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewNetworkConnectivityLevel(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewDomainConnectivityLevel(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewHostNameList(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewWwanRegistrationState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkStateChangeEventDetails=_uuidof(INetworkStateChangeEventDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkStateChangeEventDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("D643C0E8-30D3-4F6A-AD47-6A1873CEB3C1"), exclusiveto, contract] */
                MIDL_INTERFACE("D643C0E8-30D3-4F6A-AD47-6A1873CEB3C1")
                INetworkStateChangeEventDetails2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewTetheringOperationalState(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasNewTetheringClientCount(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkStateChangeEventDetails2=_uuidof(INetworkStateChangeEventDetails2);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkUsage[] = L"Windows.Networking.Connectivity.INetworkUsage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("49DA8FCE-9985-4927-BF5B-072B5C65F8D9"), exclusiveto, contract] */
                MIDL_INTERFACE("49DA8FCE-9985-4927-BF5B-072B5C65F8D9")
                INetworkUsage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesSent(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesReceived(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionDuration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * duration
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INetworkUsage=_uuidof(INetworkUsage);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IProviderNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ProviderNetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProviderNetworkUsage[] = L"Windows.Networking.Connectivity.IProviderNetworkUsage";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("5EC69E04-7931-48C8-B8F3-46300FA42728"), exclusiveto, contract] */
                MIDL_INTERFACE("5EC69E04-7931-48C8-B8F3-46300FA42728")
                IProviderNetworkUsage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesSent(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BytesReceived(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProviderId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProviderNetworkUsage=_uuidof(IProviderNetworkUsage);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Connectivity.IProxyConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ProxyConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProxyConfiguration[] = L"Windows.Networking.Connectivity.IProxyConfiguration";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("EF3A60B4-9004-4DD6-B7D8-B3E502F4AAD0"), exclusiveto, contract] */
                MIDL_INTERFACE("EF3A60B4-9004-4DD6-B7D8-B3E502F4AAD0")
                IProxyConfiguration : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyUris(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanConnectDirectly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProxyConfiguration=_uuidof(IProxyConfiguration);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IRoutePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.RoutePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicy[] = L"Windows.Networking.Connectivity.IRoutePolicy";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("11ABC4AC-0FC7-42E4-8742-569923B1CA11"), exclusiveto, contract] */
                MIDL_INTERFACE("11ABC4AC-0FC7-42E4-8742-569923B1CA11")
                IRoutePolicy : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionProfile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IConnectionProfile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HostName(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HostNameType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::DomainNameType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRoutePolicy=_uuidof(IRoutePolicy);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IRoutePolicyFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.RoutePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicyFactory[] = L"Windows.Networking.Connectivity.IRoutePolicyFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("36027933-A18E-4DB5-A697-F58FA7364E44"), exclusiveto, contract] */
                MIDL_INTERFACE("36027933-A18E-4DB5-A697-F58FA7364E44")
                IRoutePolicyFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateRoutePolicy(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::IConnectionProfile * connectionProfile,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * hostName,
                        /* [in] */ABI::Windows::Networking::DomainNameType type,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Connectivity::IRoutePolicy * * routePolicy
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRoutePolicyFactory=_uuidof(IRoutePolicyFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IWlanConnectionProfileDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.WlanConnectionProfileDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWlanConnectionProfileDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("562098CB-B35A-4BF1-A884-B7557E88FF86"), exclusiveto, contract] */
                MIDL_INTERFACE("562098CB-B35A-4BF1-A884-B7557E88FF86")
                IWlanConnectionProfileDetails : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetConnectedSsid(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWlanConnectionProfileDetails=_uuidof(IWlanConnectionProfileDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IWwanConnectionProfileDetails
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.WwanConnectionProfileDetails
 *
 *
 */
#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Connectivity {
                /* [object, uuid("0E4DA8FE-835F-4DF3-82FD-DF556EBC09EF"), exclusiveto, contract] */
                MIDL_INTERFACE("0E4DA8FE-835F-4DF3-82FD-DF556EBC09EF")
                IWwanConnectionProfileDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HomeProviderId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessPointName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetNetworkRegistrationState(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::WwanNetworkRegistrationState * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentDataClass(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Connectivity::WwanDataClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWwanConnectionProfileDetails=_uuidof(IWwanConnectionProfileDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.AttributedNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IAttributedNetworkUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_AttributedNetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_AttributedNetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_AttributedNetworkUsage[] = L"Windows.Networking.Connectivity.AttributedNetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.CellularApnContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ICellularApnContext ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_CellularApnContext_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_CellularApnContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_CellularApnContext[] = L"Windows.Networking.Connectivity.CellularApnContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionCost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionCost ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionCost2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionCost_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionCost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionCost[] = L"Windows.Networking.Connectivity.ConnectionCost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionProfile ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionProfile2
 *    Windows.Networking.Connectivity.IConnectionProfile3
 *    Windows.Networking.Connectivity.IConnectionProfile4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfile[] = L"Windows.Networking.Connectivity.ConnectionProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionProfileFilter ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionProfileFilter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfileFilter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfileFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfileFilter[] = L"Windows.Networking.Connectivity.ConnectionProfileFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionSession_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionSession[] = L"Windows.Networking.Connectivity.ConnectionSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectivityInterval
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectivityInterval ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityInterval_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityInterval_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityInterval[] = L"Windows.Networking.Connectivity.ConnectivityInterval";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectivityManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Connectivity.IConnectivityManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityManager_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityManager[] = L"Windows.Networking.Connectivity.ConnectivityManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataPlanStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataPlanStatus ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanStatus_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanStatus[] = L"Windows.Networking.Connectivity.DataPlanStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataPlanUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataPlanUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanUsage[] = L"Windows.Networking.Connectivity.DataPlanUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataUsage_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use NetworkUsage.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataUsage[] = L"Windows.Networking.Connectivity.DataUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.IPInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IIPInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_IPInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_IPInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_IPInformation[] = L"Windows.Networking.Connectivity.IPInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.LanIdentifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ILanIdentifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifier_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifier[] = L"Windows.Networking.Connectivity.LanIdentifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.LanIdentifierData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ILanIdentifierData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifierData_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifierData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifierData[] = L"Windows.Networking.Connectivity.LanIdentifierData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkAdapter ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkAdapter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkAdapter[] = L"Windows.Networking.Connectivity.NetworkAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Connectivity.INetworkInformationStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.Connectivity.INetworkInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkInformation[] = L"Windows.Networking.Connectivity.NetworkInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkItem_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkItem[] = L"Windows.Networking.Connectivity.NetworkItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkSecuritySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkSecuritySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkSecuritySettings_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkSecuritySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkSecuritySettings[] = L"Windows.Networking.Connectivity.NetworkSecuritySettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkStateChangeEventDetails ** Default Interface **
 *    Windows.Networking.Connectivity.INetworkStateChangeEventDetails2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkStateChangeEventDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkStateChangeEventDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.NetworkStateChangeEventDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkUsage[] = L"Windows.Networking.Connectivity.NetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ProviderNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IProviderNetworkUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ProviderNetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ProviderNetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProviderNetworkUsage[] = L"Windows.Networking.Connectivity.ProviderNetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Networking.Connectivity.ProxyConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IProxyConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ProxyConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ProxyConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProxyConfiguration[] = L"Windows.Networking.Connectivity.ProxyConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.RoutePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Connectivity.IRoutePolicyFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IRoutePolicy ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_RoutePolicy_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_RoutePolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_RoutePolicy[] = L"Windows.Networking.Connectivity.RoutePolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.WlanConnectionProfileDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IWlanConnectionProfileDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_WlanConnectionProfileDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_WlanConnectionProfileDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WlanConnectionProfileDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.WwanConnectionProfileDetails
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IWwanConnectionProfileDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_WwanConnectionProfileDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_WwanConnectionProfileDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WwanConnectionProfileDetails";
#endif
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectionProfile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CConnectivityInterval **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CLanIdentifier **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CNetworkUsage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

typedef struct __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;

interface __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

typedef  struct __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;

interface __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

typedef struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;

interface __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityIntervalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CConnectionSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CConnectivity__CProxyConfiguration **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if !defined(____FIReference_1_GUID_INTERFACE_DEFINED__)
#define ____FIReference_1_GUID_INTERFACE_DEFINED__

typedef interface __FIReference_1_GUID __FIReference_1_GUID;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_GUID;

typedef struct __FIReference_1_GUIDVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_GUID * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_GUID * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_GUID * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_GUID * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_GUID * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_GUID * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_GUID * This, /* [retval][out] */ __RPC__out GUID *value);
    END_INTERFACE
} __FIReference_1_GUIDVtbl;

interface __FIReference_1_GUID
{
    CONST_VTBL struct __FIReference_1_GUIDVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_GUID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_GUID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_GUID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_GUID_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_GUID_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_GUID_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_GUID_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_GUID_INTERFACE_DEFINED__


#if !defined(____FIReference_1_byte_INTERFACE_DEFINED__)
#define ____FIReference_1_byte_INTERFACE_DEFINED__

typedef interface __FIReference_1_byte __FIReference_1_byte;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_byte;

typedef struct __FIReference_1_byteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_byte * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_byte * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_byte * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_byte * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_byte * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_byte * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_byte * This, /* [retval][out] */ __RPC__out byte *value);
    END_INTERFACE
} __FIReference_1_byteVtbl;

interface __FIReference_1_byte
{
    CONST_VTBL struct __FIReference_1_byteVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_byte_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_byte_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_byte_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_byte_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_byte_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_byte_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_byte_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_byte_INTERFACE_DEFINED__


#if !defined(____FIReference_1_boolean_INTERFACE_DEFINED__)
#define ____FIReference_1_boolean_INTERFACE_DEFINED__

typedef interface __FIReference_1_boolean __FIReference_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_boolean;

typedef struct __FIReference_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_boolean * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_boolean * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_boolean * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_boolean * This, /* [retval][out] */ __RPC__out boolean *value);
    END_INTERFACE
} __FIReference_1_booleanVtbl;

interface __FIReference_1_boolean
{
    CONST_VTBL struct __FIReference_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_boolean_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIReference_1_UINT64_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT64;

typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, /* [retval][out] */ __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;

interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT64_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT64_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_byte_INTERFACE_DEFINED__)
#define ____FIIterator_1_byte_INTERFACE_DEFINED__

typedef interface __FIIterator_1_byte __FIIterator_1_byte;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_byte;

typedef struct __FIIterator_1_byteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_byte * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_byte * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_byte * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_byte * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_byte * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_byte * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_byte * This, /* [retval][out] */ __RPC__out byte *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_byte * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_byte * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_byte * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) byte *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_byteVtbl;

interface __FIIterator_1_byte
{
    CONST_VTBL struct __FIIterator_1_byteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_byte_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_byte_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_byte_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_byte_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_byte_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_byte_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_byte_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_byte_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_byte_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_byte_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_byte_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_byte_INTERFACE_DEFINED__)
#define ____FIIterable_1_byte_INTERFACE_DEFINED__

typedef interface __FIIterable_1_byte __FIIterable_1_byte;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_byte;

typedef  struct __FIIterable_1_byteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_byte * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_byte * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_byte * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_byte * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_byte * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_byte * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_byte * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_byte **first);

    END_INTERFACE
} __FIIterable_1_byteVtbl;

interface __FIIterable_1_byte
{
    CONST_VTBL struct __FIIterable_1_byteVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_byte_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_byte_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_byte_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_byte_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_byte_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_byte_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_byte_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_byte_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_byte_INTERFACE_DEFINED__)
#define ____FIVectorView_1_byte_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_byte __FIVectorView_1_byte;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_byte;

typedef struct __FIVectorView_1_byteVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_byte * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_byte * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_byte * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_byte * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_byte * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_byte * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_byte * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out byte *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_byte * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_byte * This,
            /* [in] */ byte item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_byte * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) byte *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_byteVtbl;

interface __FIVectorView_1_byte
{
    CONST_VTBL struct __FIVectorView_1_byteVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_byte_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_byte_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_byte_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_byte_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_byte_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_byte_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_byte_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_byte_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_byte_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_byte_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_byte_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;

typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;

interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CHostName_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CHostName_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;

typedef  struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;

interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CHostName_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;

typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CIHostName * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;

interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CHostName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CHostName_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CHostName_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CHostName_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CHostName_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPair __x_ABI_CWindows_CNetworking_CIEndpointPair;

#endif // ____x_ABI_CWindows_CNetworking_CIEndpointPair_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CEndpointPair __FIIterator_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIIterator_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CEndpointPair_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CEndpointPair_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CEndpointPair __FIIterable_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CEndpointPair;

typedef  struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CEndpointPair **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIIterable_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CEndpointPair_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CEndpointPair __FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CIEndpointPair * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CEndpointPair_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;

typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;

interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;

typedef  struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);

    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;

interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;

typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;

interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CFoundation__CUri_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;






typedef enum __x_ABI_CWindows_CNetworking_CDomainNameType __x_ABI_CWindows_CNetworking_CDomainNameType;




typedef enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions __x_ABI_CWindows_CNetworking_CHostNameSortOptions;



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass;


typedef enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState;


typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates;





































































/*
 *
 * Struct Windows.Networking.Connectivity.CellularApnAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType
{
    CellularApnAuthenticationType_None = 0,
    CellularApnAuthenticationType_Pap = 1,
    CellularApnAuthenticationType_Chap = 2,
    CellularApnAuthenticationType_Mschapv2 = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.DataUsageGranularity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity
{
    DataUsageGranularity_PerMinute = 0,
    DataUsageGranularity_PerHour = 1,
    DataUsageGranularity_PerDay = 2,
    DataUsageGranularity_Total = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.DomainConnectivityLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel
{
    DomainConnectivityLevel_None = 0,
    DomainConnectivityLevel_Unauthenticated = 1,
    DomainConnectivityLevel_Authenticated = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType
{
    NetworkAuthenticationType_None = 0,
    NetworkAuthenticationType_Unknown = 1,
    NetworkAuthenticationType_Open80211 = 2,
    NetworkAuthenticationType_SharedKey80211 = 3,
    NetworkAuthenticationType_Wpa = 4,
    NetworkAuthenticationType_WpaPsk = 5,
    NetworkAuthenticationType_WpaNone = 6,
    NetworkAuthenticationType_Rsna = 7,
    NetworkAuthenticationType_RsnaPsk = 8,
    NetworkAuthenticationType_Ihv = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkConnectivityLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel
{
    NetworkConnectivityLevel_None = 0,
    NetworkConnectivityLevel_LocalAccess = 1,
    NetworkConnectivityLevel_ConstrainedInternetAccess = 2,
    NetworkConnectivityLevel_InternetAccess = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkCostType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType
{
    NetworkCostType_Unknown = 0,
    NetworkCostType_Unrestricted = 1,
    NetworkCostType_Fixed = 2,
    NetworkCostType_Variable = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkEncryptionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType
{
    NetworkEncryptionType_None = 0,
    NetworkEncryptionType_Unknown = 1,
    NetworkEncryptionType_Wep = 2,
    NetworkEncryptionType_Wep40 = 3,
    NetworkEncryptionType_Wep104 = 4,
    NetworkEncryptionType_Tkip = 5,
    NetworkEncryptionType_Ccmp = 6,
    NetworkEncryptionType_WpaUseGroup = 7,
    NetworkEncryptionType_RsnUseGroup = 8,
    NetworkEncryptionType_Ihv = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes
{
    NetworkTypes_None = 0,
    NetworkTypes_Internet = 0x1,
    NetworkTypes_PrivateNetwork = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.RoamingStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates
{
    RoamingStates_None = 0,
    RoamingStates_NotRoaming = 0x1,
    RoamingStates_Roaming = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.TriStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates
{
    TriStates_DoNotCare = 0,
    TriStates_No = 1,
    TriStates_Yes = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.WwanDataClass
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass
{
    WwanDataClass_None = 0,
    WwanDataClass_Gprs = 0x1,
    WwanDataClass_Edge = 0x2,
    WwanDataClass_Umts = 0x4,
    WwanDataClass_Hsdpa = 0x8,
    WwanDataClass_Hsupa = 0x10,
    WwanDataClass_LteAdvanced = 0x20,
    WwanDataClass_Cdma1xRtt = 0x10000,
    WwanDataClass_Cdma1xEvdo = 0x20000,
    WwanDataClass_Cdma1xEvdoRevA = 0x40000,
    WwanDataClass_Cdma1xEvdv = 0x80000,
    WwanDataClass_Cdma3xRtt = 0x100000,
    WwanDataClass_Cdma1xEvdoRevB = 0x200000,
    WwanDataClass_CdmaUmb = 0x400000,
    WwanDataClass_Custom = 0x80000000,
};
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.WwanNetworkRegistrationState
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState
{
    WwanNetworkRegistrationState_None = 0,
    WwanNetworkRegistrationState_Deregistered = 1,
    WwanNetworkRegistrationState_Searching = 2,
    WwanNetworkRegistrationState_Home = 3,
    WwanNetworkRegistrationState_Roaming = 4,
    WwanNetworkRegistrationState_Partner = 5,
    WwanNetworkRegistrationState_Denied = 6,
};
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Connectivity.NetworkUsageStates
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates
{
    __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates Roaming;
    __x_ABI_CWindows_CNetworking_CConnectivity_CTriStates Shared;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Networking.Connectivity.NetworkStatusChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("71BA143F-598E-49D0-84EB-8FEBAEDCC195"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IAttributedNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.AttributedNetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IAttributedNetworkUsage[] = L"Windows.Networking.Connectivity.IAttributedNetworkUsage";
/* [object, uuid("F769B039-ECA2-45EB-ADE1-B0368B756C49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttributionId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttributionName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttributionThumbnail )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_get_BytesSent(This,value) \
    ( (This)->lpVtbl->get_BytesSent(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_get_BytesReceived(This,value) \
    ( (This)->lpVtbl->get_BytesReceived(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_get_AttributionId(This,value) \
    ( (This)->lpVtbl->get_AttributionId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_get_AttributionName(This,value) \
    ( (This)->lpVtbl->get_AttributionName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_get_AttributionThumbnail(This,value) \
    ( (This)->lpVtbl->get_AttributionThumbnail(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIAttributedNetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ICellularApnContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.CellularApnContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ICellularApnContext[] = L"Windows.Networking.Connectivity.ICellularApnContext";
/* [object, uuid("6FA529F4-EFFD-4542-9AB2-705BBF94943A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Password )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Password )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCompressionEnabled )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CCellularApnAuthenticationType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_ProviderId(This,value) \
    ( (This)->lpVtbl->get_ProviderId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_ProviderId(This,value) \
    ( (This)->lpVtbl->put_ProviderId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_AccessPointName(This,value) \
    ( (This)->lpVtbl->get_AccessPointName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_AccessPointName(This,value) \
    ( (This)->lpVtbl->put_AccessPointName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_UserName(This,value) \
    ( (This)->lpVtbl->get_UserName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_UserName(This,value) \
    ( (This)->lpVtbl->put_UserName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_Password(This,value) \
    ( (This)->lpVtbl->get_Password(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_Password(This,value) \
    ( (This)->lpVtbl->put_Password(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_IsCompressionEnabled(This,value) \
    ( (This)->lpVtbl->get_IsCompressionEnabled(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_IsCompressionEnabled(This,value) \
    ( (This)->lpVtbl->put_IsCompressionEnabled(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_get_AuthenticationType(This,value) \
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_put_AuthenticationType(This,value) \
    ( (This)->lpVtbl->put_AuthenticationType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionCost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionCost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost[] = L"Windows.Networking.Connectivity.IConnectionCost";
/* [object, uuid("BAD7D829-3416-4B10-A202-BAC0B075BDAE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Roaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApproachingDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_get_NetworkCostType(This,value) \
    ( (This)->lpVtbl->get_NetworkCostType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_get_Roaming(This,value) \
    ( (This)->lpVtbl->get_Roaming(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_get_OverDataLimit(This,value) \
    ( (This)->lpVtbl->get_OverDataLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_get_ApproachingDataLimit(This,value) \
    ( (This)->lpVtbl->get_ApproachingDataLimit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionCost2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionCost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionCost2[] = L"Windows.Networking.Connectivity.IConnectionCost2";
/* [object, uuid("8E113A05-E209-4549-BB25-5E0DB691CB05"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_get_BackgroundDataUsageRestricted(This,value) \
    ( (This)->lpVtbl->get_BackgroundDataUsageRestricted(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile[] = L"Windows.Networking.Connectivity.IConnectionProfile";
/* [object, uuid("71BA143C-598E-49D0-84EB-8FEBAEDCC195"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProfileName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkConnectivityLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkNames )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectionCost )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionCost * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataPlanStatus )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *GetLocalUsage )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime StartTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime EndTime,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *GetLocalUsagePerRoamingStates )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime StartTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime EndTime,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CRoamingStates States,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkSecuritySettings )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_get_ProfileName(This,value) \
    ( (This)->lpVtbl->get_ProfileName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetNetworkConnectivityLevel(This,value) \
    ( (This)->lpVtbl->GetNetworkConnectivityLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetNetworkNames(This,value) \
    ( (This)->lpVtbl->GetNetworkNames(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetConnectionCost(This,value) \
    ( (This)->lpVtbl->GetConnectionCost(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetDataPlanStatus(This,value) \
    ( (This)->lpVtbl->GetDataPlanStatus(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_get_NetworkAdapter(This,value) \
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetLocalUsage(This,StartTime,EndTime,value) \
    ( (This)->lpVtbl->GetLocalUsage(This,StartTime,EndTime,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetLocalUsage may be altered or unavailable for releases after Windows 8.1. Instead, use GetNetworkUsageAsync.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_GetLocalUsagePerRoamingStates(This,StartTime,EndTime,States,value) \
    ( (This)->lpVtbl->GetLocalUsagePerRoamingStates(This,StartTime,EndTime,States,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_get_NetworkSecuritySettings(This,value) \
    ( (This)->lpVtbl->get_NetworkSecuritySettings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile2[] = L"Windows.Networking.Connectivity.IConnectionProfile2";
/* [object, uuid("E2045145-4C9F-400C-9150-7EC7D6E2888A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WwanConnectionProfileDetails )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WlanConnectionProfileDetails )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_GUID * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSignalBars )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDomainConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CDomainConnectivityLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime endTime,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CDataUsageGranularity granularity,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CNetworkUsage * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectivityIntervalsAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime endTime,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectivityInterval * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_get_IsWwanConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_IsWwanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_get_IsWlanConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_IsWlanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_get_WwanConnectionProfileDetails(This,value) \
    ( (This)->lpVtbl->get_WwanConnectionProfileDetails(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_get_WlanConnectionProfileDetails(This,value) \
    ( (This)->lpVtbl->get_WlanConnectionProfileDetails(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_get_ServiceProviderGuid(This,value) \
    ( (This)->lpVtbl->get_ServiceProviderGuid(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetSignalBars(This,value) \
    ( (This)->lpVtbl->GetSignalBars(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetDomainConnectivityLevel(This,value) \
    ( (This)->lpVtbl->GetDomainConnectivityLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetNetworkUsageAsync(This,startTime,endTime,granularity,states,value) \
    ( (This)->lpVtbl->GetNetworkUsageAsync(This,startTime,endTime,granularity,states,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_GetConnectivityIntervalsAsync(This,startTime,endTime,states,value) \
    ( (This)->lpVtbl->GetConnectivityIntervalsAsync(This,startTime,endTime,states,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile3[] = L"Windows.Networking.Connectivity.IConnectionProfile3";
/* [object, uuid("578C2528-4CD9-4161-8045-201CFD5B115C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAttributedNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime endTime,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CAttributedNetworkUsage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_GetAttributedNetworkUsageAsync(This,startTime,endTime,states,value) \
    ( (This)->lpVtbl->GetAttributedNetworkUsageAsync(This,startTime,endTime,states,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfile4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfile4[] = L"Windows.Networking.Connectivity.IConnectionProfile4";
/* [object, uuid("7A2D42CD-81E0-4AE6-ABED-AB9CA13EB714"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetProviderNetworkUsageAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime startTime,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime endTime,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CNetworkUsageStates states,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CProviderNetworkUsage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_GetProviderNetworkUsageAsync(This,startTime,endTime,states,value) \
    ( (This)->lpVtbl->GetProviderNetworkUsageAsync(This,startTime,endTime,states,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfileFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter";
/* [object, uuid("204C7CC8-BD2D-4E8D-A4B3-455EC337388A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsConnected )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsConnected )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWwanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWlanConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkCostType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkCostType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [in] */__RPC__in_opt __FIReference_1_GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceProviderGuid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_GUID * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_put_IsConnected(This,value) \
    ( (This)->lpVtbl->put_IsConnected(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_get_IsConnected(This,value) \
    ( (This)->lpVtbl->get_IsConnected(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_put_IsWwanConnectionProfile(This,value) \
    ( (This)->lpVtbl->put_IsWwanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_get_IsWwanConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_IsWwanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_put_IsWlanConnectionProfile(This,value) \
    ( (This)->lpVtbl->put_IsWlanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_get_IsWlanConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_IsWlanConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_put_NetworkCostType(This,value) \
    ( (This)->lpVtbl->put_NetworkCostType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_get_NetworkCostType(This,value) \
    ( (This)->lpVtbl->get_NetworkCostType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_put_ServiceProviderGuid(This,value) \
    ( (This)->lpVtbl->put_ServiceProviderGuid(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_get_ServiceProviderGuid(This,value) \
    ( (This)->lpVtbl->get_ServiceProviderGuid(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionProfileFilter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionProfileFilter2[] = L"Windows.Networking.Connectivity.IConnectionProfileFilter2";
/* [object, uuid("CD068EE1-C3FC-4FAD-9DDC-593FAA4B7885"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRoaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRoaming )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsOverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOverDataLimit )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsBackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBackgroundDataUsageRestricted )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_boolean * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawData )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_put_IsRoaming(This,value) \
    ( (This)->lpVtbl->put_IsRoaming(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_get_IsRoaming(This,value) \
    ( (This)->lpVtbl->get_IsRoaming(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_put_IsOverDataLimit(This,value) \
    ( (This)->lpVtbl->put_IsOverDataLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_get_IsOverDataLimit(This,value) \
    ( (This)->lpVtbl->get_IsOverDataLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_put_IsBackgroundDataUsageRestricted(This,value) \
    ( (This)->lpVtbl->put_IsBackgroundDataUsageRestricted(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_get_IsBackgroundDataUsageRestricted(This,value) \
    ( (This)->lpVtbl->get_IsBackgroundDataUsageRestricted(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_get_RawData(This,value) \
    ( (This)->lpVtbl->get_RawData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectionSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectionSession[] = L"Windows.Networking.Connectivity.IConnectionSession";
/* [object, uuid("FF905D4C-F83B-41B0-8A0C-1462D9C56B73"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_get_ConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_ConnectionProfile(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectivityInterval
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectivityInterval
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityInterval[] = L"Windows.Networking.Connectivity.IConnectivityInterval";
/* [object, uuid("4FAA3FFF-6746-4824-A964-EED8E87F8709"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * startTime
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionDuration )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * duration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityIntervalVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_get_StartTime(This,startTime) \
    ( (This)->lpVtbl->get_StartTime(This,startTime) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_get_ConnectionDuration(This,duration) \
    ( (This)->lpVtbl->get_ConnectionDuration(This,duration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityInterval_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IConnectivityManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ConnectivityManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IConnectivityManagerStatics[] = L"Windows.Networking.Connectivity.IConnectivityManagerStatics";
/* [object, uuid("5120D4B1-4FB1-48B0-AFC9-42E0092A8164"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AcquireConnectionAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CICellularApnContext * cellularApnContext,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionSession * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddHttpRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * routePolicy
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveHttpRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * routePolicy
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_AcquireConnectionAsync(This,cellularApnContext,operation) \
    ( (This)->lpVtbl->AcquireConnectionAsync(This,cellularApnContext,operation) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_AddHttpRoutePolicy(This,routePolicy) \
    ( (This)->lpVtbl->AddHttpRoutePolicy(This,routePolicy) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_RemoveHttpRoutePolicy(This,routePolicy) \
    ( (This)->lpVtbl->RemoveHttpRoutePolicy(This,routePolicy) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIConnectivityManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataPlanStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataPlanStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanStatus[] = L"Windows.Networking.Connectivity.IDataPlanStatus";
/* [object, uuid("977A8B8C-3885-40F3-8851-42CD2BD568BB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataPlanUsage )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataLimitInMegabytes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextBillingCycle )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxTransferSizeInMegabytes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_DataPlanUsage(This,value) \
    ( (This)->lpVtbl->get_DataPlanUsage(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_DataLimitInMegabytes(This,value) \
    ( (This)->lpVtbl->get_DataLimitInMegabytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_InboundBitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_InboundBitsPerSecond(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_OutboundBitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_OutboundBitsPerSecond(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_NextBillingCycle(This,value) \
    ( (This)->lpVtbl->get_NextBillingCycle(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_get_MaxTransferSizeInMegabytes(This,value) \
    ( (This)->lpVtbl->get_MaxTransferSizeInMegabytes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataPlanUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataPlanUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataPlanUsage[] = L"Windows.Networking.Connectivity.IDataPlanUsage";
/* [object, uuid("B921492D-3B44-47FF-B361-BE59E69ED1B0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MegabytesUsed )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastSyncTime )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_get_MegabytesUsed(This,value) \
    ( (This)->lpVtbl->get_MegabytesUsed(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_get_LastSyncTime(This,value) \
    ( (This)->lpVtbl->get_LastSyncTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataPlanUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IDataUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.DataUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IDataUsage[] = L"Windows.Networking.Connectivity.IDataUsage";
/* [object, uuid("C1431DD3-B146-4D39-B959-0C69B096C512"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_get_BytesSent(This,value) \
    ( (This)->lpVtbl->get_BytesSent(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("IDataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use INetworkUsage.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_get_BytesReceived(This,value) \
    ( (This)->lpVtbl->get_BytesReceived(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIDataUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IIPInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.IPInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IIPInformation[] = L"Windows.Networking.Connectivity.IIPInformation";
/* [object, uuid("D85145E0-138F-47D7-9B3A-36BB488CEF33"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapter )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrefixLength )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_byte * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_get_NetworkAdapter(This,value) \
    ( (This)->lpVtbl->get_NetworkAdapter(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_get_PrefixLength(This,value) \
    ( (This)->lpVtbl->get_PrefixLength(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIIPInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ILanIdentifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.LanIdentifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifier[] = L"Windows.Networking.Connectivity.ILanIdentifier";
/* [object, uuid("48AA53AA-1108-4546-A6CB-9A74DA4B7BA0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InfrastructureId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PortId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapterId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_get_InfrastructureId(This,value) \
    ( (This)->lpVtbl->get_InfrastructureId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_get_PortId(This,value) \
    ( (This)->lpVtbl->get_PortId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_get_NetworkAdapterId(This,value) \
    ( (This)->lpVtbl->get_NetworkAdapterId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.ILanIdentifierData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.LanIdentifierData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_ILanIdentifierData[] = L"Windows.Networking.Connectivity.ILanIdentifierData";
/* [object, uuid("A74E83C3-D639-45BE-A36A-C4E4AEAF6D9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_byte * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CILanIdentifierData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkAdapter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkAdapter[] = L"Windows.Networking.Connectivity.INetworkAdapter";
/* [object, uuid("3B542E03-5388-496C-A8A3-AFFD39AEC2E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundMaxBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InboundMaxBitsPerSecond )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IanaInterfaceType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkItem )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAdapterId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetConnectedProfileAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_get_OutboundMaxBitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_OutboundMaxBitsPerSecond(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_get_InboundMaxBitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_InboundMaxBitsPerSecond(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_get_IanaInterfaceType(This,value) \
    ( (This)->lpVtbl->get_IanaInterfaceType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_get_NetworkItem(This,value) \
    ( (This)->lpVtbl->get_NetworkItem(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_get_NetworkAdapterId(This,value) \
    ( (This)->lpVtbl->get_NetworkAdapterId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_GetConnectedProfileAsync(This,value) \
    ( (This)->lpVtbl->GetConnectedProfileAsync(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics[] = L"Windows.Networking.Connectivity.INetworkInformationStatics";
/* [object, uuid("5074F851-950D-4165-9C15-365619481EEA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectionProfiles )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInternetConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLanIdentifiers )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CConnectivity__CLanIdentifier * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHostNames )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProxyConfigurationAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CConnectivity__CProxyConfiguration * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSortedEndpointPairs )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CEndpointPair * destinationList,
        /* [in] */__x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CEndpointPair * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NetworkStatusChanged )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStatusChangedEventHandler  * networkStatusHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NetworkStatusChanged )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetConnectionProfiles(This,value) \
    ( (This)->lpVtbl->GetConnectionProfiles(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetInternetConnectionProfile(This,value) \
    ( (This)->lpVtbl->GetInternetConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetLanIdentifiers(This,value) \
    ( (This)->lpVtbl->GetLanIdentifiers(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetHostNames(This,value) \
    ( (This)->lpVtbl->GetHostNames(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetProxyConfigurationAsync(This,uri,value) \
    ( (This)->lpVtbl->GetProxyConfigurationAsync(This,uri,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_GetSortedEndpointPairs(This,destinationList,sortOptions,value) \
    ( (This)->lpVtbl->GetSortedEndpointPairs(This,destinationList,sortOptions,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_add_NetworkStatusChanged(This,networkStatusHandler,eventCookie) \
    ( (This)->lpVtbl->add_NetworkStatusChanged(This,networkStatusHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_remove_NetworkStatusChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_NetworkStatusChanged(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkInformationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkInformationStatics2[] = L"Windows.Networking.Connectivity.INetworkInformationStatics2";
/* [object, uuid("459CED14-2832-49B6-BA6E-E265F04786A8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindConnectionProfilesAsync )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfileFilter * pProfileFilter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CConnectivity__CConnectionProfile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_FindConnectionProfilesAsync(This,pProfileFilter,value) \
    ( (This)->lpVtbl->FindConnectionProfilesAsync(This,pProfileFilter,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkInformationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkItem[] = L"Windows.Networking.Connectivity.INetworkItem";
/* [object, uuid("01BC4D39-F5E0-4567-A28C-42080C831B2B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkTypes )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkTypes * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_get_NetworkId(This,value) \
    ( (This)->lpVtbl->get_NetworkId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_GetNetworkTypes(This,value) \
    ( (This)->lpVtbl->GetNetworkTypes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkSecuritySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkSecuritySettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkSecuritySettings[] = L"Windows.Networking.Connectivity.INetworkSecuritySettings";
/* [object, uuid("7CA07E8D-917B-4B5F-B84D-28F7A5AC5402"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkAuthenticationType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkAuthenticationType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkEncryptionType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CNetworkEncryptionType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_get_NetworkAuthenticationType(This,value) \
    ( (This)->lpVtbl->get_NetworkAuthenticationType(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_get_NetworkEncryptionType(This,value) \
    ( (This)->lpVtbl->get_NetworkEncryptionType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkSecuritySettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkStateChangeEventDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails";
/* [object, uuid("1F0CF333-D7A6-44DD-A4E9-687C476B903D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewInternetConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewConnectionCost )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewNetworkConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewDomainConnectivityLevel )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewHostNameList )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewWwanRegistrationState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewInternetConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_HasNewInternetConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewConnectionCost(This,value) \
    ( (This)->lpVtbl->get_HasNewConnectionCost(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewNetworkConnectivityLevel(This,value) \
    ( (This)->lpVtbl->get_HasNewNetworkConnectivityLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewDomainConnectivityLevel(This,value) \
    ( (This)->lpVtbl->get_HasNewDomainConnectivityLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewHostNameList(This,value) \
    ( (This)->lpVtbl->get_HasNewHostNameList(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_get_HasNewWwanRegistrationState(This,value) \
    ( (This)->lpVtbl->get_HasNewWwanRegistrationState(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkStateChangeEventDetails2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkStateChangeEventDetails2[] = L"Windows.Networking.Connectivity.INetworkStateChangeEventDetails2";
/* [object, uuid("D643C0E8-30D3-4F6A-AD47-6A1873CEB3C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewTetheringOperationalState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasNewTetheringClientCount )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_get_HasNewTetheringOperationalState(This,value) \
    ( (This)->lpVtbl->get_HasNewTetheringOperationalState(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_get_HasNewTetheringClientCount(This,value) \
    ( (This)->lpVtbl->get_HasNewTetheringClientCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkStateChangeEventDetails2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.INetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.NetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_INetworkUsage[] = L"Windows.Networking.Connectivity.INetworkUsage";
/* [object, uuid("49DA8FCE-9985-4927-BF5B-072B5C65F8D9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionDuration )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * duration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_get_BytesSent(This,value) \
    ( (This)->lpVtbl->get_BytesSent(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_get_BytesReceived(This,value) \
    ( (This)->lpVtbl->get_BytesReceived(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_get_ConnectionDuration(This,duration) \
    ( (This)->lpVtbl->get_ConnectionDuration(This,duration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IProviderNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ProviderNetworkUsage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProviderNetworkUsage[] = L"Windows.Networking.Connectivity.IProviderNetworkUsage";
/* [object, uuid("5EC69E04-7931-48C8-B8F3-46300FA42728"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesSent )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BytesReceived )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_get_BytesSent(This,value) \
    ( (This)->lpVtbl->get_BytesSent(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_get_BytesReceived(This,value) \
    ( (This)->lpVtbl->get_BytesReceived(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_get_ProviderId(This,value) \
    ( (This)->lpVtbl->get_ProviderId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProviderNetworkUsage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Connectivity.IProxyConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.ProxyConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IProxyConfiguration[] = L"Windows.Networking.Connectivity.IProxyConfiguration";
/* [object, uuid("EF3A60B4-9004-4DD6-B7D8-B3E502F4AAD0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyUris )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanConnectDirectly )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_get_ProxyUris(This,value) \
    ( (This)->lpVtbl->get_ProxyUris(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_get_CanConnectDirectly(This,value) \
    ( (This)->lpVtbl->get_CanConnectDirectly(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIProxyConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IRoutePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.RoutePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicy[] = L"Windows.Networking.Connectivity.IRoutePolicy";
/* [object, uuid("11ABC4AC-0FC7-42E4-8742-569923B1CA11"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionProfile )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HostName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HostNameType )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CDomainNameType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_get_ConnectionProfile(This,value) \
    ( (This)->lpVtbl->get_ConnectionProfile(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_get_HostName(This,value) \
    ( (This)->lpVtbl->get_HostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_get_HostNameType(This,value) \
    ( (This)->lpVtbl->get_HostNameType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IRoutePolicyFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.RoutePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IRoutePolicyFactory[] = L"Windows.Networking.Connectivity.IRoutePolicyFactory";
/* [object, uuid("36027933-A18E-4DB5-A697-F58FA7364E44"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRoutePolicy )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIConnectionProfile * connectionProfile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * hostName,
        /* [in] */__x_ABI_CWindows_CNetworking_CDomainNameType type,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicy * * routePolicy
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_CreateRoutePolicy(This,connectionProfile,hostName,type,routePolicy) \
    ( (This)->lpVtbl->CreateRoutePolicy(This,connectionProfile,hostName,type,routePolicy) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIRoutePolicyFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IWlanConnectionProfileDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.WlanConnectionProfileDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWlanConnectionProfileDetails";
/* [object, uuid("562098CB-B35A-4BF1-A884-B7557E88FF86"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetConnectedSsid )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_GetConnectedSsid(This,value) \
    ( (This)->lpVtbl->GetConnectedSsid(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWlanConnectionProfileDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Connectivity.IWwanConnectionProfileDetails
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Connectivity.WwanConnectionProfileDetails
 *
 *
 */
#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Connectivity_IWwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.IWwanConnectionProfileDetails";
/* [object, uuid("0E4DA8FE-835F-4DF3-82FD-DF556EBC09EF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HomeProviderId )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessPointName )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNetworkRegistrationState )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CWwanNetworkRegistrationState * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentDataClass )(
        __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CConnectivity_CWwanDataClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_get_HomeProviderId(This,value) \
    ( (This)->lpVtbl->get_HomeProviderId(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_get_AccessPointName(This,value) \
    ( (This)->lpVtbl->get_AccessPointName(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_GetNetworkRegistrationState(This,value) \
    ( (This)->lpVtbl->GetNetworkRegistrationState(This,value) )

#define __x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_GetCurrentDataClass(This,value) \
    ( (This)->lpVtbl->GetCurrentDataClass(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CConnectivity_CIWwanConnectionProfileDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.AttributedNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IAttributedNetworkUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_AttributedNetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_AttributedNetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_AttributedNetworkUsage[] = L"Windows.Networking.Connectivity.AttributedNetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.CellularApnContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ICellularApnContext ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_CellularApnContext_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_CellularApnContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_CellularApnContext[] = L"Windows.Networking.Connectivity.CellularApnContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionCost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionCost ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionCost2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionCost_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionCost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionCost[] = L"Windows.Networking.Connectivity.ConnectionCost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionProfile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionProfile ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionProfile2
 *    Windows.Networking.Connectivity.IConnectionProfile3
 *    Windows.Networking.Connectivity.IConnectionProfile4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfile_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfile[] = L"Windows.Networking.Connectivity.ConnectionProfile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionProfileFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionProfileFilter ** Default Interface **
 *    Windows.Networking.Connectivity.IConnectionProfileFilter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfileFilter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionProfileFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionProfileFilter[] = L"Windows.Networking.Connectivity.ConnectionProfileFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectionSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionSession_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectionSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectionSession[] = L"Windows.Networking.Connectivity.ConnectionSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectivityInterval
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IConnectivityInterval ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityInterval_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityInterval_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityInterval[] = L"Windows.Networking.Connectivity.ConnectivityInterval";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ConnectivityManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Connectivity.IConnectivityManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityManager_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ConnectivityManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ConnectivityManager[] = L"Windows.Networking.Connectivity.ConnectivityManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataPlanStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataPlanStatus ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanStatus_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanStatus[] = L"Windows.Networking.Connectivity.DataPlanStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataPlanUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataPlanUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataPlanUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataPlanUsage[] = L"Windows.Networking.Connectivity.DataPlanUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.DataUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IDataUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_DataUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_DataUsage_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("DataUsage may be altered or unavailable for releases after Windows 8.1. Instead, use NetworkUsage.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_DataUsage[] = L"Windows.Networking.Connectivity.DataUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.IPInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IIPInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_IPInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_IPInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_IPInformation[] = L"Windows.Networking.Connectivity.IPInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.LanIdentifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ILanIdentifier ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifier_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifier[] = L"Windows.Networking.Connectivity.LanIdentifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.LanIdentifierData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.ILanIdentifierData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifierData_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_LanIdentifierData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_LanIdentifierData[] = L"Windows.Networking.Connectivity.LanIdentifierData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkAdapter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkAdapter ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkAdapter_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkAdapter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkAdapter[] = L"Windows.Networking.Connectivity.NetworkAdapter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Connectivity.INetworkInformationStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.Connectivity.INetworkInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkInformation[] = L"Windows.Networking.Connectivity.NetworkInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkItem_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkItem[] = L"Windows.Networking.Connectivity.NetworkItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkSecuritySettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkSecuritySettings ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkSecuritySettings_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkSecuritySettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkSecuritySettings[] = L"Windows.Networking.Connectivity.NetworkSecuritySettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkStateChangeEventDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkStateChangeEventDetails ** Default Interface **
 *    Windows.Networking.Connectivity.INetworkStateChangeEventDetails2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkStateChangeEventDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkStateChangeEventDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkStateChangeEventDetails[] = L"Windows.Networking.Connectivity.NetworkStateChangeEventDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.NetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.INetworkUsage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_NetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_NetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_NetworkUsage[] = L"Windows.Networking.Connectivity.NetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.ProviderNetworkUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IProviderNetworkUsage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ProviderNetworkUsage_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ProviderNetworkUsage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProviderNetworkUsage[] = L"Windows.Networking.Connectivity.ProviderNetworkUsage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Networking.Connectivity.ProxyConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IProxyConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_ProxyConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_ProxyConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_ProxyConfiguration[] = L"Windows.Networking.Connectivity.ProxyConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.RoutePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Connectivity.IRoutePolicyFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IRoutePolicy ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_RoutePolicy_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_RoutePolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_RoutePolicy[] = L"Windows.Networking.Connectivity.RoutePolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.WlanConnectionProfileDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IWlanConnectionProfileDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_WlanConnectionProfileDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_WlanConnectionProfileDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WlanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WlanConnectionProfileDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Connectivity.WwanConnectionProfileDetails
 *
 * Introduced to Windows.Networking.Connectivity.WwanContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Connectivity.IWwanConnectionProfileDetails ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Connectivity_WwanConnectionProfileDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Connectivity_WwanConnectionProfileDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Connectivity_WwanConnectionProfileDetails[] = L"Windows.Networking.Connectivity.WwanConnectionProfileDetails";
#endif
#endif // WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Enetworking2Econnectivity_p_h__

#endif // __windows2Enetworking2Econnectivity_h__
