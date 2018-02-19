/* Header file automatically generated from windows.networking.sockets.idl */
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
#ifndef __windows2Enetworking2Esockets_h__
#define __windows2Enetworking2Esockets_h__
#ifndef __windows2Enetworking2Esockets_p_h__
#define __windows2Enetworking2Esockets_p_h__


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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Networking.h"
#include "Windows.Networking.Connectivity.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IControlChannelTrigger;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger ABI::Windows::Networking::Sockets::IControlChannelTrigger

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IControlChannelTrigger2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 ABI::Windows::Networking::Sockets::IControlChannelTrigger2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IControlChannelTriggerEventDetails;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails ABI::Windows::Networking::Sockets::IControlChannelTriggerEventDetails

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IControlChannelTriggerFactory;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory ABI::Windows::Networking::Sockets::IControlChannelTriggerFactory

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IControlChannelTriggerResetEventDetails;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails ABI::Windows::Networking::Sockets::IControlChannelTriggerResetEventDetails

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket ABI::Windows::Networking::Sockets::IDatagramSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocket2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 ABI::Windows::Networking::Sockets::IDatagramSocket2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocket3;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 ABI::Windows::Networking::Sockets::IDatagramSocket3

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl ABI::Windows::Networking::Sockets::IDatagramSocketControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 ABI::Windows::Networking::Sockets::IDatagramSocketControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketControl3;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 ABI::Windows::Networking::Sockets::IDatagramSocketControl3

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation ABI::Windows::Networking::Sockets::IDatagramSocketInformation

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketMessageReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs ABI::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IDatagramSocketStatics;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics ABI::Windows::Networking::Sockets::IDatagramSocketStatics

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket ABI::Windows::Networking::Sockets::IMessageWebSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocket2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 ABI::Windows::Networking::Sockets::IMessageWebSocket2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl ABI::Windows::Networking::Sockets::IMessageWebSocketControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocketControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 ABI::Windows::Networking::Sockets::IMessageWebSocketControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocketMessageReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs ABI::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IMessageWebSocketMessageReceivedEventArgs2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 ABI::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketActivityContext;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext ABI::Windows::Networking::Sockets::ISocketActivityContext

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketActivityContextFactory;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory ABI::Windows::Networking::Sockets::ISocketActivityContextFactory

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketActivityInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation ABI::Windows::Networking::Sockets::ISocketActivityInformation

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketActivityInformationStatics;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics ABI::Windows::Networking::Sockets::ISocketActivityInformationStatics

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketActivityTriggerDetails;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails ABI::Windows::Networking::Sockets::ISocketActivityTriggerDetails

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface ISocketErrorStatics;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics ABI::Windows::Networking::Sockets::ISocketErrorStatics

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket ABI::Windows::Networking::Sockets::IStreamSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocket2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 ABI::Windows::Networking::Sockets::IStreamSocket2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocket3;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 ABI::Windows::Networking::Sockets::IStreamSocket3

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl ABI::Windows::Networking::Sockets::IStreamSocketControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 ABI::Windows::Networking::Sockets::IStreamSocketControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketControl3;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 ABI::Windows::Networking::Sockets::IStreamSocketControl3

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketControl4;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 ABI::Windows::Networking::Sockets::IStreamSocketControl4

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation ABI::Windows::Networking::Sockets::IStreamSocketInformation

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketInformation2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 ABI::Windows::Networking::Sockets::IStreamSocketInformation2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListener;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener ABI::Windows::Networking::Sockets::IStreamSocketListener

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListener2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 ABI::Windows::Networking::Sockets::IStreamSocketListener2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListener3;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 ABI::Windows::Networking::Sockets::IStreamSocketListener3

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListenerConnectionReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs ABI::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListenerControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl ABI::Windows::Networking::Sockets::IStreamSocketListenerControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListenerControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 ABI::Windows::Networking::Sockets::IStreamSocketListenerControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketListenerInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation ABI::Windows::Networking::Sockets::IStreamSocketListenerInformation

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamSocketStatics;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics ABI::Windows::Networking::Sockets::IStreamSocketStatics

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamWebSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket ABI::Windows::Networking::Sockets::IStreamWebSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamWebSocket2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 ABI::Windows::Networking::Sockets::IStreamWebSocket2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamWebSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl ABI::Windows::Networking::Sockets::IStreamWebSocketControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IStreamWebSocketControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 ABI::Windows::Networking::Sockets::IStreamWebSocketControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket ABI::Windows::Networking::Sockets::IWebSocket

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketClosedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs ABI::Windows::Networking::Sockets::IWebSocketClosedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl ABI::Windows::Networking::Sockets::IWebSocketControl

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketControl2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 ABI::Windows::Networking::Sockets::IWebSocketControl2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketErrorStatics;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics ABI::Windows::Networking::Sockets::IWebSocketErrorStatics

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation ABI::Windows::Networking::Sockets::IWebSocketInformation

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketInformation2;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 ABI::Windows::Networking::Sockets::IWebSocketInformation2

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                interface IWebSocketServerCustomValidationRequestedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class SocketActivityInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7e4bda2c-0125-587d-8806-1285060f3b2d"))
IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::SocketActivityInformation*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::SocketActivityInformation*, ABI::Windows::Networking::Sockets::ISocketActivityInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Networking.Sockets.SocketActivityInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::SocketActivityInformation*> __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f656f7a2-264b-5cfd-8288-64eb89455157"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Networking.Sockets.SocketActivityInformation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3e43fa16-7af1-51df-a0d3-da81b321639d"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Networking.Sockets.SocketActivityInformation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#define DEF___FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e6ac8bee-a31c-5af2-9227-5be2f9e80763"))
IMapView<HSTRING,ABI::Windows::Networking::Sockets::SocketActivityInformation*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::SocketActivityInformation*, ABI::Windows::Networking::Sockets::ISocketActivityInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Networking.Sockets.SocketActivityInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Networking::Sockets::SocketActivityInformation*> __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t;
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>
//#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Networking::Sockets::ISocketActivityInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("71b5d99e-3854-5e9a-b4dc-d1b58bf198fc"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::Sockets::StreamSocket*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::StreamSocket*, ABI::Windows::Networking::Sockets::IStreamSocket*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.Sockets.StreamSocket>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::Sockets::StreamSocket*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Sockets::IStreamSocket*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::Sockets::IStreamSocket*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fb3e3d3c-6fe5-5e27-a132-902247e2a93e"))
IAsyncOperation<ABI::Windows::Networking::Sockets::StreamSocket*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::StreamSocket*, ABI::Windows::Networking::Sockets::IStreamSocket*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.Sockets.StreamSocket>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::Sockets::StreamSocket*> __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Sockets::IStreamSocket*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::Sockets::IStreamSocket*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class DatagramSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class DatagramSocketMessageReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4482e19b-2389-5767-9b0b-8d7a8ef55743"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::DatagramSocket*,ABI::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::DatagramSocket*, ABI::Windows::Networking::Sockets::IDatagramSocket*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs*, ABI::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.DatagramSocket, Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::DatagramSocket*,ABI::Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IDatagramSocket*,ABI::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IDatagramSocket*,ABI::Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class WebSocketClosedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("03cf8f90-1669-5f4d-9404-2b784678e6dd"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::IWebSocket*,ABI::Windows::Networking::Sockets::WebSocketClosedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Networking::Sockets::IWebSocket*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::WebSocketClosedEventArgs*, ABI::Windows::Networking::Sockets::IWebSocketClosedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.IWebSocket, Windows.Networking.Sockets.WebSocketClosedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::IWebSocket*,ABI::Windows::Networking::Sockets::WebSocketClosedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketClosedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketClosedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class MessageWebSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class MessageWebSocketMessageReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("de980538-6dcd-52b0-802f-4b6cf59a01ab"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::MessageWebSocket*,ABI::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::MessageWebSocket*, ABI::Windows::Networking::Sockets::IMessageWebSocket*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs*, ABI::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.MessageWebSocket, Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::MessageWebSocket*,ABI::Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IMessageWebSocket*,ABI::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IMessageWebSocket*,ABI::Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class WebSocketServerCustomValidationRequestedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2c34c585-9cf6-56c7-8dd1-5da26e322078"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::MessageWebSocket*,ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::MessageWebSocket*, ABI::Windows::Networking::Sockets::IMessageWebSocket*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*, ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.MessageWebSocket, Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::MessageWebSocket*,ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IMessageWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IMessageWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketListener;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketListenerConnectionReceivedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("33d00d41-c94f-5a61-9ab7-280dcefa0b08"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::StreamSocketListener*,ABI::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::StreamSocketListener*, ABI::Windows::Networking::Sockets::IStreamSocketListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs*, ABI::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.StreamSocketListener, Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::StreamSocketListener*,ABI::Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IStreamSocketListener*,ABI::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IStreamSocketListener*,ABI::Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamWebSocket;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("18b143d3-897e-595e-acc1-ef35614b4cec"))
ITypedEventHandler<ABI::Windows::Networking::Sockets::StreamWebSocket*,ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::StreamWebSocket*, ABI::Windows::Networking::Sockets::IStreamWebSocket*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*, ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.Sockets.StreamWebSocket, Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::Sockets::StreamWebSocket*,ABI::Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IStreamWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::Sockets::IStreamWebSocket*,ABI::Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream ABI::Windows::Storage::Streams::IOutputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bcb37f4f-3af4-561c-a9e3-eef1738494d7"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IOutputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IOutputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IOutputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e8736833-d013-5361-977d-c5e99934680e"))
IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IOutputStream*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IOutputStream>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IOutputStream*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_USE */


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("20d6faab-3b8e-5a1f-8397-b01cb219a18d"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("afc2ff8e-e393-566a-89c4-d043e940050d"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.EndpointPair>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CEndpointPair*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::IEndpointPair*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    enum ChainValidationResult : int;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcad2b7-0e3b-5eae-bf69-e1f6d9c888f8"))
IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterator_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628f58f-3f02-54f2-808f-e1117709d6d0"))
IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterable_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb383486-c2bc-5756-912d-6a708a07e5bd"))
IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVectorView_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7828cf7-4301-58d3-aab5-06e5eefcf79f"))
IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVector_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class Certificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate ABI::Windows::Security::Cryptography::Certificates::ICertificate

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("676fc159-f15c-58bd-91a7-28f7e795c756"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c7d1423-e8fd-5a91-b55c-8bfbe7ac2d40"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("963f7013-77c2-51c5-8038-b5bcef633edb"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


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





#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTask;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask ABI::Windows::ApplicationModel::Background::IBackgroundTask

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTrigger;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger ABI::Windows::ApplicationModel::Background::IBackgroundTrigger

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


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
        namespace Networking {
            namespace Connectivity {
                class NetworkAdapter;
            } /* Windows */
        } /* Networking */
    } /* Connectivity */} /* ABI */

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


namespace ABI {
    namespace Windows {
        namespace Networking {
            
            typedef enum HostNameSortOptions : unsigned int HostNameSortOptions;
            
        } /* Windows */
    } /* Networking */} /* ABI */



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
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ChainValidationResult : int ChainValidationResult;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                class DataReader;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IDataReader;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIDataReader ABI::Windows::Storage::Streams::IDataReader

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__


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
            
            typedef enum WebErrorStatus : int WebErrorStatus;
            
        } /* Windows */
    } /* Web */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum ControlChannelTriggerResetReason : int ControlChannelTriggerResetReason;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum ControlChannelTriggerResourceType : int ControlChannelTriggerResourceType;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum ControlChannelTriggerStatus : int ControlChannelTriggerStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum MessageWebSocketReceiveMode : int MessageWebSocketReceiveMode;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketActivityConnectedStandbyAction : int SocketActivityConnectedStandbyAction;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketActivityKind : int SocketActivityKind;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketActivityTriggerReason : int SocketActivityTriggerReason;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketErrorStatus : int SocketErrorStatus;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketMessageType : int SocketMessageType;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketProtectionLevel : int SocketProtectionLevel;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketQualityOfService : int SocketQualityOfService;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketSslErrorSeverity : int SocketSslErrorSeverity;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef struct BandwidthStatistics BandwidthStatistics;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef struct RoundTripTimeStatistics RoundTripTimeStatistics;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
























































namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class ControlChannelTrigger;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class DatagramSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class DatagramSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class MessageWebSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class MessageWebSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class SocketActivityContext;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class SocketActivityTriggerDetails;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketListenerControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamSocketListenerInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamWebSocketControl;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class StreamWebSocketInformation;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                class WebSocketKeepAlive;
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */












/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerResetReason
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum ControlChannelTriggerResetReason : int
                {
                    ControlChannelTriggerResetReason_FastUserSwitched = 0,
                    ControlChannelTriggerResetReason_LowPowerExit = 1,
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
                    
                    ControlChannelTriggerResetReason_QuietHoursExit = 2,
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
                    
                    ControlChannelTriggerResetReason_ApplicationRestart = 3,
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerResourceType
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum ControlChannelTriggerResourceType : int
                {
                    ControlChannelTriggerResourceType_RequestSoftwareSlot = 0,
                    ControlChannelTriggerResourceType_RequestHardwareSlot = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerStatus
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum ControlChannelTriggerStatus : int
                {
                    ControlChannelTriggerStatus_HardwareSlotRequested = 0,
                    ControlChannelTriggerStatus_SoftwareSlotAllocated = 1,
                    ControlChannelTriggerStatus_HardwareSlotAllocated = 2,
                    ControlChannelTriggerStatus_PolicyError = 3,
                    ControlChannelTriggerStatus_SystemError = 4,
                    ControlChannelTriggerStatus_TransportDisconnected = 5,
                    ControlChannelTriggerStatus_ServiceUnavailable = 6,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.MessageWebSocketReceiveMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum MessageWebSocketReceiveMode : int
                {
                    MessageWebSocketReceiveMode_FullMessage = 0,
                    MessageWebSocketReceiveMode_PartialMessage = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityConnectedStandbyAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketActivityConnectedStandbyAction : int
                {
                    SocketActivityConnectedStandbyAction_DoNotWake = 0,
                    SocketActivityConnectedStandbyAction_Wake = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketActivityKind : int
                {
                    SocketActivityKind_None = 0,
                    SocketActivityKind_StreamSocketListener = 1,
                    SocketActivityKind_DatagramSocket = 2,
                    SocketActivityKind_StreamSocket = 3,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityTriggerReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketActivityTriggerReason : int
                {
                    SocketActivityTriggerReason_None = 0,
                    SocketActivityTriggerReason_SocketActivity = 1,
                    SocketActivityTriggerReason_ConnectionAccepted = 2,
                    SocketActivityTriggerReason_KeepAliveTimerExpired = 3,
                    SocketActivityTriggerReason_SocketClosed = 4,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketErrorStatus : int
                {
                    SocketErrorStatus_Unknown = 0,
                    SocketErrorStatus_OperationAborted = 1,
                    SocketErrorStatus_HttpInvalidServerResponse = 2,
                    SocketErrorStatus_ConnectionTimedOut = 3,
                    SocketErrorStatus_AddressFamilyNotSupported = 4,
                    SocketErrorStatus_SocketTypeNotSupported = 5,
                    SocketErrorStatus_HostNotFound = 6,
                    SocketErrorStatus_NoDataRecordOfRequestedType = 7,
                    SocketErrorStatus_NonAuthoritativeHostNotFound = 8,
                    SocketErrorStatus_ClassTypeNotFound = 9,
                    SocketErrorStatus_AddressAlreadyInUse = 10,
                    SocketErrorStatus_CannotAssignRequestedAddress = 11,
                    SocketErrorStatus_ConnectionRefused = 12,
                    SocketErrorStatus_NetworkIsUnreachable = 13,
                    SocketErrorStatus_UnreachableHost = 14,
                    SocketErrorStatus_NetworkIsDown = 15,
                    SocketErrorStatus_NetworkDroppedConnectionOnReset = 16,
                    SocketErrorStatus_SoftwareCausedConnectionAbort = 17,
                    SocketErrorStatus_ConnectionResetByPeer = 18,
                    SocketErrorStatus_HostIsDown = 19,
                    SocketErrorStatus_NoAddressesFound = 20,
                    SocketErrorStatus_TooManyOpenFiles = 21,
                    SocketErrorStatus_MessageTooLong = 22,
                    SocketErrorStatus_CertificateExpired = 23,
                    SocketErrorStatus_CertificateUntrustedRoot = 24,
                    SocketErrorStatus_CertificateCommonNameIsIncorrect = 25,
                    SocketErrorStatus_CertificateWrongUsage = 26,
                    SocketErrorStatus_CertificateRevoked = 27,
                    SocketErrorStatus_CertificateNoRevocationCheck = 28,
                    SocketErrorStatus_CertificateRevocationServerOffline = 29,
                    SocketErrorStatus_CertificateIsInvalid = 30,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketMessageType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketMessageType : int
                {
                    SocketMessageType_Binary = 0,
                    SocketMessageType_Utf8 = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketProtectionLevel : int
                {
                    SocketProtectionLevel_PlainSocket = 0,
                    SocketProtectionLevel_Ssl
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("Ssl may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 1,
                    SocketProtectionLevel_SslAllowNullEncryption = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_BluetoothEncryptionAllowNullAuthentication = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_BluetoothEncryptionWithAuthentication = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_Ssl3AllowWeakEncryption
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("Ssl3AllowWeakEncryption may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                     = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_Tls10 = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_Tls11 = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    SocketProtectionLevel_Tls12 = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    SocketProtectionLevel_Unspecified = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketQualityOfService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketQualityOfService : int
                {
                    SocketQualityOfService_Normal = 0,
                    SocketQualityOfService_LowLatency = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketSslErrorSeverity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [v1_enum, contract] */
                enum SocketSslErrorSeverity : int
                {
                    SocketSslErrorSeverity_None = 0,
                    SocketSslErrorSeverity_Ignorable = 1,
                    SocketSslErrorSeverity_Fatal = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.BandwidthStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [contract] */
                struct BandwidthStatistics
                {
                    UINT64 OutboundBitsPerSecond;
                    UINT64 InboundBitsPerSecond;
                    UINT64 OutboundBitsPerSecondInstability;
                    UINT64 InboundBitsPerSecondInstability;
                    boolean OutboundBandwidthPeaked;
                    boolean InboundBandwidthPeaked;
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.RoundTripTimeStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [contract] */
                struct RoundTripTimeStatistics
                {
                    UINT32 Variance;
                    UINT32 Max;
                    UINT32 Min;
                    UINT32 Sum;
                };
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTrigger
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger[] = L"Windows.Networking.Sockets.IControlChannelTrigger";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("7D1431A7-EE96-40E8-A199-8703CD969EC3"), exclusiveto, contract] */
                MIDL_INTERFACE("7D1431A7-EE96-40E8-A199-8703CD969EC3")
                IControlChannelTrigger : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlChannelTriggerId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerKeepAliveIntervalInMinutes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerKeepAliveIntervalInMinutes(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentKeepAliveIntervalInMinutes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransportObject(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeepAliveTrigger(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Background::IBackgroundTrigger * * trigger
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PushNotificationTrigger(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Background::IBackgroundTrigger * * trigger
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UsingTransport(
                        /* [in] */__RPC__in_opt IInspectable * transport
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE WaitForPushEnabled(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::ControlChannelTriggerStatus * channelTriggerStatus
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DecreaseNetworkKeepAliveInterval(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FlushTransport(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IControlChannelTrigger=_uuidof(IControlChannelTrigger);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTrigger2
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger2[] = L"Windows.Networking.Sockets.IControlChannelTrigger2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("AF00D237-51BE-4514-9725-3556E1879580"), exclusiveto, contract] */
                MIDL_INTERFACE("AF00D237-51BE-4514-9725-3556E1879580")
                IControlChannelTrigger2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsWakeFromLowPowerSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IControlChannelTrigger2=_uuidof(IControlChannelTrigger2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerEventDetails
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerEventDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("1B36E047-89BB-4236-96AC-71D012BB4869"), contract] */
                MIDL_INTERFACE("1B36E047-89BB-4236-96AC-71D012BB4869")
                IControlChannelTriggerEventDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlChannelTrigger(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IControlChannelTrigger * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IControlChannelTriggerEventDetails=_uuidof(IControlChannelTriggerEventDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerFactory
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerFactory[] = L"Windows.Networking.Sockets.IControlChannelTriggerFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("DA4B7CF0-8D71-446F-88C3-B95184A2D6CD"), exclusiveto, contract] */
                MIDL_INTERFACE("DA4B7CF0-8D71-446F-88C3-B95184A2D6CD")
                IControlChannelTriggerFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateControlChannelTrigger(
                        /* [in] */__RPC__in HSTRING channelId,
                        /* [in] */UINT32 serverKeepAliveIntervalInMinutes,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IControlChannelTrigger * * notificationChannel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateControlChannelTriggerEx(
                        /* [in] */__RPC__in HSTRING channelId,
                        /* [in] */UINT32 serverKeepAliveIntervalInMinutes,
                        /* [in] */ABI::Windows::Networking::Sockets::ControlChannelTriggerResourceType resourceRequestType,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IControlChannelTrigger * * notificationChannel
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IControlChannelTriggerFactory=_uuidof(IControlChannelTriggerFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("6851038E-8EC4-42FE-9BB2-21E91B7BFCB1"), contract] */
                MIDL_INTERFACE("6851038E-8EC4-42FE-9BB2-21E91B7BFCB1")
                IControlChannelTriggerResetEventDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResetReason(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::ControlChannelTriggerResetReason * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareSlotReset(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareSlotReset(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IControlChannelTriggerResetEventDetails=_uuidof(IControlChannelTriggerResetEventDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket[] = L"Windows.Networking.Sockets.IDatagramSocket";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("7FE25BBB-C3BC-4677-8446-CA28A465A3AF"), exclusiveto, contract] */
                MIDL_INTERFACE("7FE25BBB-C3BC-4677-8446-CA28A465A3AF")
                IDatagramSocket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IDatagramSocketControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IDatagramSocketInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithEndpointPairAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IEndpointPair * endpointPair,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BindServiceNameAsync(
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BindEndpointAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * localHostName,
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE JoinMulticastGroup(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * host
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetOutputStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetOutputStreamWithEndpointPairAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IEndpointPair * endpointPair,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MessageReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MessageReceived(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocket=_uuidof(IDatagramSocket);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket2[] = L"Windows.Networking.Sockets.IDatagramSocket2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("D83BA354-9A9D-4185-A20A-1424C9C2A7CD"), exclusiveto, contract] */
                MIDL_INTERFACE("D83BA354-9A9D-4185-A20A-1424C9C2A7CD")
                IDatagramSocket2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE BindServiceNameAndAdapterAsync(
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * adapter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocket2=_uuidof(IDatagramSocket2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket3[] = L"Windows.Networking.Sockets.IDatagramSocket3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("37544F09-AB92-4306-9AC1-0C381283D9C6"), exclusiveto, contract] */
                MIDL_INTERFACE("37544F09-AB92-4306-9AC1-0C381283D9C6")
                IDatagramSocket3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CancelIOAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnership(
                        /* [in] */GUID taskId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnershipWithConnectedStandbyAction(
                        /* [in] */GUID taskId,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnership(
                        /* [in] */__RPC__in HSTRING socketId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnershipWithContext(
                        /* [in] */__RPC__in HSTRING socketId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * data
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnershipWithContextAndKeepAliveTime(
                        /* [in] */__RPC__in HSTRING socketId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * data,
                        /* [in] */ABI::Windows::Foundation::TimeSpan keepAliveTime
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocket3=_uuidof(IDatagramSocket3);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl[] = L"Windows.Networking.Sockets.IDatagramSocketControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("52AC3F2E-349A-4135-BB58-B79B2647D390"), exclusiveto, contract] */
                MIDL_INTERFACE("52AC3F2E-349A-4135-BB58-B79B2647D390")
                IDatagramSocketControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualityOfService(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketQualityOfService * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QualityOfService(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketQualityOfService value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundUnicastHopLimit(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundUnicastHopLimit(
                        /* [in] */BYTE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketControl=_uuidof(IDatagramSocketControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl2[] = L"Windows.Networking.Sockets.IDatagramSocketControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("33EAD5C2-979C-4415-82A1-3CFAF646C192"), exclusiveto, contract] */
                MIDL_INTERFACE("33EAD5C2-979C-4415-82A1-3CFAF646C192")
                IDatagramSocketControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboundBufferSizeInBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InboundBufferSizeInBytes(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DontFragment(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DontFragment(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketControl2=_uuidof(IDatagramSocketControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl3[] = L"Windows.Networking.Sockets.IDatagramSocketControl3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("D4EB8256-1F6D-4598-9B57-D42A001DF349"), exclusiveto, contract] */
                MIDL_INTERFACE("D4EB8256-1F6D-4598-9B57-D42A001DF349")
                IDatagramSocketControl3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MulticastOnly(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MulticastOnly(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketControl3=_uuidof(IDatagramSocketControl3);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketInformation[] = L"Windows.Networking.Sockets.IDatagramSocketInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("5F1A569A-55FB-48CD-9706-7A974F7B1585"), exclusiveto, contract] */
                MIDL_INTERFACE("5F1A569A-55FB-48CD-9706-7A974F7B1585")
                IDatagramSocketInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalPort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemotePort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketInformation=_uuidof(IDatagramSocketInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D107E"), exclusiveto, contract] */
                MIDL_INTERFACE("9E2DDCA2-1712-4CE4-B179-8C652C6D107E")
                IDatagramSocketMessageReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemotePort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataReader(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IDataReader * * dataReader
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * inputStream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketMessageReceivedEventArgs=_uuidof(IDatagramSocketMessageReceivedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketStatics[] = L"Windows.Networking.Sockets.IDatagramSocketStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("E9C62AEE-1494-4A21-BB7E-8589FC751D9D"), exclusiveto, contract] */
                MIDL_INTERFACE("E9C62AEE-1494-4A21-BB7E-8589FC751D9D")
                IDatagramSocketStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetEndpointPairsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetEndpointPairsWithSortOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [in] */ABI::Windows::Networking::HostNameSortOptions sortOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDatagramSocketStatics=_uuidof(IDatagramSocketStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket[] = L"Windows.Networking.Sockets.IMessageWebSocket";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("33727D08-34D5-4746-AD7B-8DDE5BC2EF88"), exclusiveto, contract] */
                MIDL_INTERFACE("33727D08-34D5-4746-AD7B-8DDE5BC2EF88")
                IMessageWebSocket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IMessageWebSocketControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IWebSocketInformation * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MessageReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MessageReceived(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocket=_uuidof(IMessageWebSocket);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IMessageWebSocket
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket2[] = L"Windows.Networking.Sockets.IMessageWebSocket2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("BED0CEE7-F9C8-440A-9AD5-737281D9742E"), exclusiveto, contract] */
                MIDL_INTERFACE("BED0CEE7-F9C8-440A-9AD5-737281D9742E")
                IMessageWebSocket2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServerCustomValidationRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServerCustomValidationRequested(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocket2=_uuidof(IMessageWebSocket2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketControl
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl[] = L"Windows.Networking.Sockets.IMessageWebSocketControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("8118388A-C629-4F0A-80FB-81FC05538862"), exclusiveto, contract] */
                MIDL_INTERFACE("8118388A-C629-4F0A-80FB-81FC05538862")
                IMessageWebSocketControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxMessageSize(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxMessageSize(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MessageType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketMessageType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MessageType(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketMessageType value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocketControl=_uuidof(IMessageWebSocketControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl2[] = L"Windows.Networking.Sockets.IMessageWebSocketControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("E30FD791-080C-400A-A712-27DFA9E744D8"), exclusiveto, contract] */
                MIDL_INTERFACE("E30FD791-080C-400A-A712-27DFA9E744D8")
                IMessageWebSocketControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredUnsolicitedPongInterval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredUnsolicitedPongInterval(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualUnsolicitedPongInterval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReceiveMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::MessageWebSocketReceiveMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReceiveMode(
                        /* [in] */ABI::Windows::Networking::Sockets::MessageWebSocketReceiveMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClientCertificate(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocketControl2=_uuidof(IMessageWebSocketControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("478C22AC-4C4B-42ED-9ED7-1EF9F94FA3D5"), exclusiveto, contract] */
                MIDL_INTERFACE("478C22AC-4C4B-42ED-9ED7-1EF9F94FA3D5")
                IMessageWebSocketMessageReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MessageType(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketMessageType * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataReader(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IDataReader * * dataReader
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * inputStream
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocketMessageReceivedEventArgs=_uuidof(IMessageWebSocketMessageReceivedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("89CE06FD-DD6F-4A07-87F9-F9EB4D89D83D"), exclusiveto, contract] */
                MIDL_INTERFACE("89CE06FD-DD6F-4A07-87F9-F9EB4D89D83D")
                IMessageWebSocketMessageReceivedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMessageComplete(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageWebSocketMessageReceivedEventArgs2=_uuidof(IMessageWebSocketMessageReceivedEventArgs2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContext[] = L"Windows.Networking.Sockets.ISocketActivityContext";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("43B04D64-4C85-4396-A637-1D973F6EBD49"), exclusiveto, contract] */
                MIDL_INTERFACE("43B04D64-4C85-4396-A637-1D973F6EBD49")
                ISocketActivityContext : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketActivityContext=_uuidof(ISocketActivityContext);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityContextFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContextFactory[] = L"Windows.Networking.Sockets.ISocketActivityContextFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("B99FC3C3-088C-4388-83AE-2525138E049A"), exclusiveto, contract] */
                MIDL_INTERFACE("B99FC3C3-088C-4388-83AE-2525138E049A")
                ISocketActivityContextFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * * context
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketActivityContextFactory=_uuidof(ISocketActivityContextFactory);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformation[] = L"Windows.Networking.Sockets.ISocketActivityInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("8D8A42E4-A87E-4B74-9968-185B2511DEFE"), exclusiveto, contract] */
                MIDL_INTERFACE("8D8A42E4-A87E-4B74-9968-185B2511DEFE")
                ISocketActivityInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SocketKind(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketActivityKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Context(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DatagramSocket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IDatagramSocket * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StreamSocket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocket * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StreamSocketListener(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocketListener * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketActivityInformation=_uuidof(ISocketActivityInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformationStatics[] = L"Windows.Networking.Sockets.ISocketActivityInformationStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("8570B47A-7E7D-4736-8041-1327A6543C56"), exclusiveto, contract] */
                MIDL_INTERFACE("8570B47A-7E7D-4736-8041-1327A6543C56")
                ISocketActivityInformationStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllSockets(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * * sockets
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketActivityInformationStatics=_uuidof(ISocketActivityInformationStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.ISocketActivityTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("45F406A7-FC9F-4F81-ACAD-355FEF51E67B"), exclusiveto, contract] */
                MIDL_INTERFACE("45F406A7-FC9F-4F81-ACAD-355FEF51E67B")
                ISocketActivityTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketActivityTriggerReason * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SocketInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::ISocketActivityInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketActivityTriggerDetails=_uuidof(ISocketActivityTriggerDetails);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketErrorStatics[] = L"Windows.Networking.Sockets.ISocketErrorStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("828337F4-7D56-4D8E-B7B4-A07DD7C1BCA9"), exclusiveto, contract] */
                MIDL_INTERFACE("828337F4-7D56-4D8E-B7B4-A07DD7C1BCA9")
                ISocketErrorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [in] */INT32 hresult,
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketErrorStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocketErrorStatics=_uuidof(ISocketErrorStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket[] = L"Windows.Networking.Sockets.IStreamSocket";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("69A22CF3-FC7B-4857-AF38-F6E7DE6A5B49"), exclusiveto, contract] */
                MIDL_INTERFACE("69A22CF3-FC7B-4857-AF38-F6E7DE6A5B49")
                IStreamSocket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocketControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocketInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithEndpointPairAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IEndpointPair * endpointPair,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE ConnectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithEndpointPairAndProtectionLevelAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IEndpointPair * endpointPair,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithProtectionLevelAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpgradeToSslAsync(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * validationHostName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocket=_uuidof(IStreamSocket);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket2[] = L"Windows.Networking.Sockets.IStreamSocket2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("29D0E575-F314-4D09-ADF0-0FBD967FBD9F"), exclusiveto, contract] */
                MIDL_INTERFACE("29D0E575-F314-4D09-ADF0-0FBD967FBD9F")
                IStreamSocket2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ConnectWithProtectionLevelAndAdapterAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * adapter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocket2=_uuidof(IStreamSocket2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket3[] = L"Windows.Networking.Sockets.IStreamSocket3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("3F430B00-9D28-4854-BAC3-2301941EC223"), exclusiveto, contract] */
                MIDL_INTERFACE("3F430B00-9D28-4854-BAC3-2301941EC223")
                IStreamSocket3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CancelIOAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnership(
                        /* [in] */GUID taskId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnershipWithConnectedStandbyAction(
                        /* [in] */GUID taskId,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnership(
                        /* [in] */__RPC__in HSTRING socketId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnershipWithContext(
                        /* [in] */__RPC__in HSTRING socketId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * data
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnershipWithContextAndKeepAliveTime(
                        /* [in] */__RPC__in HSTRING socketId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * data,
                        /* [in] */ABI::Windows::Foundation::TimeSpan keepAliveTime
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocket3=_uuidof(IStreamSocket3);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl[] = L"Windows.Networking.Sockets.IStreamSocketControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("FE25ADF1-92AB-4AF3-9992-0F4C85E36CC4"), exclusiveto, contract] */
                MIDL_INTERFACE("FE25ADF1-92AB-4AF3-9992-0F4C85E36CC4")
                IStreamSocketControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoDelay(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NoDelay(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeepAlive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeepAlive(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundBufferSizeInBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundBufferSizeInBytes(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualityOfService(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketQualityOfService * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QualityOfService(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketQualityOfService value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundUnicastHopLimit(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundUnicastHopLimit(
                        /* [in] */BYTE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketControl=_uuidof(IStreamSocketControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl2[] = L"Windows.Networking.Sockets.IStreamSocketControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("C2D09A56-060F-44C1-B8E2-1FBF60BD62C5"), exclusiveto, contract] */
                MIDL_INTERFACE("C2D09A56-060F-44C1-B8E2-1FBF60BD62C5")
                IStreamSocketControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnorableServerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketControl2=_uuidof(IStreamSocketControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl3[] = L"Windows.Networking.Sockets.IStreamSocketControl3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("C56A444C-4E74-403E-894C-B31CAE5C7342"), exclusiveto, contract] */
                MIDL_INTERFACE("C56A444C-4E74-403E-894C-B31CAE5C7342")
                IStreamSocketControl3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SerializeConnectionAttempts(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SerializeConnectionAttempts(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClientCertificate(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketControl3=_uuidof(IStreamSocketControl3);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl4[] = L"Windows.Networking.Sockets.IStreamSocketControl4";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("964E2B3D-EC27-4888-B3CE-C74B418423AD"), exclusiveto, contract] */
                MIDL_INTERFACE("964E2B3D-EC27-4888-B3CE-C74B418423AD")
                IStreamSocketControl4 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinProtectionLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketProtectionLevel * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MinProtectionLevel(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketControl4=_uuidof(IStreamSocketControl4);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation[] = L"Windows.Networking.Sockets.IStreamSocketInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("3B80AE30-5E68-4205-88F0-DC85D2E25DED"), exclusiveto, contract] */
                MIDL_INTERFACE("3B80AE30-5E68-4205-88F0-DC85D2E25DED")
                IStreamSocketInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalPort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteHostName(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteServiceName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemotePort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoundTripTimeStatistics(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::RoundTripTimeStatistics * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BandwidthStatistics(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::BandwidthStatistics * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionLevel(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketProtectionLevel * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionKey(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketInformation=_uuidof(IStreamSocketInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation2[] = L"Windows.Networking.Sockets.IStreamSocketInformation2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("12C28452-4BDC-4EE4-976A-CF130E9D92E3"), exclusiveto, contract] */
                MIDL_INTERFACE("12C28452-4BDC-4EE4-976A-CF130E9D92E3")
                IStreamSocketInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrorSeverity(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketSslErrorSeverity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerIntermediateCertificates(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketInformation2=_uuidof(IStreamSocketInformation2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener[] = L"Windows.Networking.Sockets.IStreamSocketListener";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("FF513437-DF9F-4DF0-BF82-0EC5D7B35AAE"), exclusiveto, contract] */
                MIDL_INTERFACE("FF513437-DF9F-4DF0-BF82-0EC5D7B35AAE")
                IStreamSocketListener : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocketListenerControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocketListenerInformation * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BindServiceNameAsync(
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BindEndpointAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * localHostName,
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ConnectionReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ConnectionReceived(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListener=_uuidof(IStreamSocketListener);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener2[] = L"Windows.Networking.Sockets.IStreamSocketListener2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("658DC13E-BB3E-4458-B232-ED1088694B98"), exclusiveto, contract] */
                MIDL_INTERFACE("658DC13E-BB3E-4458-B232-ED1088694B98")
                IStreamSocketListener2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE BindServiceNameWithProtectionLevelAsync(
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE BindServiceNameWithProtectionLevelAndAdapterAsync(
                        /* [in] */__RPC__in HSTRING localServiceName,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketProtectionLevel protectionLevel,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Connectivity::INetworkAdapter * adapter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListener2=_uuidof(IStreamSocketListener2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener3[] = L"Windows.Networking.Sockets.IStreamSocketListener3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("4798201C-BDF8-4919-8542-28D450E74507"), exclusiveto, contract] */
                MIDL_INTERFACE("4798201C-BDF8-4919-8542-28D450E74507")
                IStreamSocketListener3 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CancelIOAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnership(
                        /* [in] */GUID taskId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE EnableTransferOwnershipWithConnectedStandbyAction(
                        /* [in] */GUID taskId,
                        /* [in] */ABI::Windows::Networking::Sockets::SocketActivityConnectedStandbyAction connectedStandbyAction
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnership(
                        /* [in] */__RPC__in HSTRING socketId
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE TransferOwnershipWithContext(
                        /* [in] */__RPC__in HSTRING socketId,
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::Sockets::ISocketActivityContext * data
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListener3=_uuidof(IStreamSocketListener3);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("0C472EA9-373F-447B-85B1-DDD4548803BA"), exclusiveto, contract] */
                MIDL_INTERFACE("0C472EA9-373F-447B-85B1-DDD4548803BA")
                IStreamSocketListenerConnectionReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Socket(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamSocket * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListenerConnectionReceivedEventArgs=_uuidof(IStreamSocketListenerConnectionReceivedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("20D8C576-8D8A-4DBA-9722-A16C4D984980"), exclusiveto, contract] */
                MIDL_INTERFACE("20D8C576-8D8A-4DBA-9722-A16C4D984980")
                IStreamSocketListenerControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QualityOfService(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketQualityOfService * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QualityOfService(
                        /* [in] */ABI::Windows::Networking::Sockets::SocketQualityOfService value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListenerControl=_uuidof(IStreamSocketListenerControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl2[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("948BB665-2C3E-404B-B8B0-8EB249A2B0A1"), exclusiveto, contract] */
                MIDL_INTERFACE("948BB665-2C3E-404B-B8B0-8EB249A2B0A1")
                IStreamSocketListenerControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoDelay(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NoDelay(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeepAlive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeepAlive(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundBufferSizeInBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundBufferSizeInBytes(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundUnicastHopLimit(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundUnicastHopLimit(
                        /* [in] */BYTE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListenerControl2=_uuidof(IStreamSocketListenerControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerInformation[] = L"Windows.Networking.Sockets.IStreamSocketListenerInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("E62BA82F-A63A-430B-BF62-29E93E5633B4"), exclusiveto, contract] */
                MIDL_INTERFACE("E62BA82F-A63A-430B-BF62-29E93E5633B4")
                IStreamSocketListenerInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalPort(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketListenerInformation=_uuidof(IStreamSocketListenerInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketStatics[] = L"Windows.Networking.Sockets.IStreamSocketStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("A420BC4A-6E2E-4AF5-B556-355AE0CD4F29"), exclusiveto, contract] */
                MIDL_INTERFACE("A420BC4A-6E2E-4AF5-B556-355AE0CD4F29")
                IStreamSocketStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetEndpointPairsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetEndpointPairsWithSortOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * remoteHostName,
                        /* [in] */__RPC__in HSTRING remoteServiceName,
                        /* [in] */ABI::Windows::Networking::HostNameSortOptions sortOptions,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamSocketStatics=_uuidof(IStreamSocketStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket[] = L"Windows.Networking.Sockets.IStreamWebSocket";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("BD4A49D8-B289-45BB-97EB-C7525205A843"), exclusiveto, contract] */
                MIDL_INTERFACE("BD4A49D8-B289-45BB-97EB-C7525205A843")
                IStreamWebSocket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IStreamWebSocketControl * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::Sockets::IWebSocketInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamWebSocket=_uuidof(IStreamWebSocket);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IStreamWebSocket
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket2[] = L"Windows.Networking.Sockets.IStreamWebSocket2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("AA4D08CB-93F5-4678-8236-57CCE5417ED5"), exclusiveto, contract] */
                MIDL_INTERFACE("AA4D08CB-93F5-4678-8236-57CCE5417ED5")
                IStreamWebSocket2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServerCustomValidationRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServerCustomValidationRequested(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamWebSocket2=_uuidof(IStreamWebSocket2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocketControl
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl[] = L"Windows.Networking.Sockets.IStreamWebSocketControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("B4F478B1-A45A-48DB-953A-645B7D964C07"), exclusiveto, contract] */
                MIDL_INTERFACE("B4F478B1-A45A-48DB-953A-645B7D964C07")
                IStreamWebSocketControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoDelay(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NoDelay(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamWebSocketControl=_uuidof(IStreamWebSocketControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl2[] = L"Windows.Networking.Sockets.IStreamWebSocketControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("215D9F7E-FA58-40DA-9F11-A48DAFE95037"), exclusiveto, contract] */
                MIDL_INTERFACE("215D9F7E-FA58-40DA-9F11-A48DAFE95037")
                IStreamWebSocketControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredUnsolicitedPongInterval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredUnsolicitedPongInterval(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualUnsolicitedPongInterval(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClientCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClientCertificate(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStreamWebSocketControl2=_uuidof(IStreamWebSocketControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocket
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
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocket[] = L"Windows.Networking.Sockets.IWebSocket";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("F877396F-99B1-4E18-BC08-850C9ADF156E"), contract] */
                MIDL_INTERFACE("F877396F-99B1-4E18-BC08-850C9ADF156E")
                IWebSocket : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutputStream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ConnectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetRequestHeader(
                        /* [in] */__RPC__in HSTRING headerName,
                        /* [in] */__RPC__in HSTRING headerValue
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Closed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Closed(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CloseWithStatus(
                        /* [in] */UINT16 code,
                        /* [in] */__RPC__in HSTRING reason
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocket=_uuidof(IWebSocket);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketClosedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketClosedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("CEB78D07-D0A8-4703-A091-C8C2C0915BC3"), exclusiveto, contract] */
                MIDL_INTERFACE("CEB78D07-D0A8-4703-A091-C8C2C0915BC3")
                IWebSocketClosedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Code(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketClosedEventArgs=_uuidof(IWebSocketClosedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl[] = L"Windows.Networking.Sockets.IWebSocketControl";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("2EC4BDC3-D9A5-455A-9811-DE24D45337E9"), contract] */
                MIDL_INTERFACE("2EC4BDC3-D9A5-455A-9811-DE24D45337E9")
                IWebSocketControl : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutboundBufferSizeInBytes(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutboundBufferSizeInBytes(
                        /* [in] */UINT32 value
                        ) = 0;
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
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedProtocols(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketControl=_uuidof(IWebSocketControl);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl2[] = L"Windows.Networking.Sockets.IWebSocketControl2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("79C3BE03-F2CA-461E-AF4E-9665BC2D0620"), contract] */
                MIDL_INTERFACE("79C3BE03-F2CA-461E-AF4E-9665BC2D0620")
                IWebSocketControl2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnorableServerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketControl2=_uuidof(IWebSocketControl2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketErrorStatics[] = L"Windows.Networking.Sockets.IWebSocketErrorStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("27CDF35B-1F61-4709-8E02-61283ADA4E9D"), exclusiveto, contract] */
                MIDL_INTERFACE("27CDF35B-1F61-4709-8E02-61283ADA4E9D")
                IWebSocketErrorStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [in] */INT32 hresult,
                        /* [retval, out] */__RPC__out ABI::Windows::Web::WebErrorStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketErrorStatics=_uuidof(IWebSocketErrorStatics);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation[] = L"Windows.Networking.Sockets.IWebSocketInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("5E01E316-C92A-47A5-B25F-07847639D181"), contract] */
                MIDL_INTERFACE("5E01E316-C92A-47A5-B25F-07847639D181")
                IWebSocketInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BandwidthStatistics(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::BandwidthStatistics * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Protocol(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketInformation=_uuidof(IWebSocketInformation);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation2[] = L"Windows.Networking.Sockets.IWebSocketInformation2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("CE1D39CE-A1B7-4D43-8269-8D5B981BD47A"), contract] */
                MIDL_INTERFACE("CE1D39CE-A1B7-4D43-8269-8D5B981BD47A")
                IWebSocketInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrorSeverity(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketSslErrorSeverity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerIntermediateCertificates(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketInformation2=_uuidof(IWebSocketInformation2);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                /* [object, uuid("FFEFFE48-022A-4AB7-8B36-E10AF4640E6B"), exclusiveto, contract] */
                MIDL_INTERFACE("FFEFFE48-022A-4AB7-8B36-E10AF4640E6B")
                IWebSocketServerCustomValidationRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrorSeverity(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketSslErrorSeverity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerIntermediateCertificates(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Reject(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWebSocketServerCustomValidationRequestedEventArgs=_uuidof(IWebSocketServerCustomValidationRequestedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Networking.Sockets.ControlChannelTrigger
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Sockets.IControlChannelTriggerFactory interface starting with version 1.0 of the Windows.Networking.Sockets.ControlChannelTriggerContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IControlChannelTrigger ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IControlChannelTrigger2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_ControlChannelTrigger_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_ControlChannelTrigger_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ControlChannelTrigger[] = L"Windows.Networking.Sockets.ControlChannelTrigger";
#endif
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IDatagramSocketStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocket ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IDatagramSocket2
 *    Windows.Networking.Sockets.IDatagramSocket3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocket[] = L"Windows.Networking.Sockets.DatagramSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IDatagramSocketControl2
 *    Windows.Networking.Sockets.IDatagramSocketControl3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketControl[] = L"Windows.Networking.Sockets.DatagramSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketInformation[] = L"Windows.Networking.Sockets.DatagramSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocket ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocket
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IMessageWebSocket2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocket[] = L"Windows.Networking.Sockets.MessageWebSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketControl
 *    Windows.Networking.Sockets.IWebSocketControl2
 *    Windows.Networking.Sockets.IMessageWebSocketControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketControl[] = L"Windows.Networking.Sockets.MessageWebSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketInformation[] = L"Windows.Networking.Sockets.MessageWebSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs ** Default Interface **
 *    Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Sockets.ISocketActivityContextFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityContext_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityContext[] = L"Windows.Networking.Sockets.SocketActivityContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.ISocketActivityInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityInformation[] = L"Windows.Networking.Sockets.SocketActivityInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.SocketActivityTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.ISocketErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketError_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketError[] = L"Windows.Networking.Sockets.SocketError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IStreamSocketStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocket ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamSocket2
 *    Windows.Networking.Sockets.IStreamSocket3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocket[] = L"Windows.Networking.Sockets.StreamSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketControl2
 *    Windows.Networking.Sockets.IStreamSocketControl3
 *    Windows.Networking.Sockets.IStreamSocketControl4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketControl[] = L"Windows.Networking.Sockets.StreamSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketInformation[] = L"Windows.Networking.Sockets.StreamSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListener ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamSocketListener2
 *    Windows.Networking.Sockets.IStreamSocketListener3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListener_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListener[] = L"Windows.Networking.Sockets.StreamSocketListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerControl ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketListenerControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerControl[] = L"Windows.Networking.Sockets.StreamSocketListenerControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerInformation[] = L"Windows.Networking.Sockets.StreamSocketListenerInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamWebSocket ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocket
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamWebSocket2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocket[] = L"Windows.Networking.Sockets.StreamWebSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamWebSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketControl
 *    Windows.Networking.Sockets.IWebSocketControl2
 *    Windows.Networking.Sockets.IStreamWebSocketControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketControl[] = L"Windows.Networking.Sockets.StreamWebSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketInformation[] = L"Windows.Networking.Sockets.StreamWebSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketClosedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketClosedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketClosedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.WebSocketClosedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IWebSocketErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketError_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketError[] = L"Windows.Networking.Sockets.WebSocketError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketKeepAlive
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Background.IBackgroundTask ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketKeepAlive_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketKeepAlive_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketKeepAlive[] = L"Windows.Networking.Sockets.WebSocketKeepAlive";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;

typedef struct __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;

interface __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream_INTERFACE_DEFINED__

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CEndpointPair * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

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



#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;

#endif // ____x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions __x_ABI_CWindows_CNetworking_CHostNameSortOptions;



#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataReader __x_ABI_CWindows_CStorage_CStreams_CIDataReader;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIDataReader_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;





typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService;


typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;


typedef struct __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics;


typedef struct __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics;




























































































/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerResetReason
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason
{
    ControlChannelTriggerResetReason_FastUserSwitched = 0,
    ControlChannelTriggerResetReason_LowPowerExit = 1,
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
    
    ControlChannelTriggerResetReason_QuietHoursExit = 2,
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
    
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
    
    ControlChannelTriggerResetReason_ApplicationRestart = 3,
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerResourceType
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType
{
    ControlChannelTriggerResourceType_RequestSoftwareSlot = 0,
    ControlChannelTriggerResourceType_RequestHardwareSlot = 1,
};
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.ControlChannelTriggerStatus
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */

#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus
{
    ControlChannelTriggerStatus_HardwareSlotRequested = 0,
    ControlChannelTriggerStatus_SoftwareSlotAllocated = 1,
    ControlChannelTriggerStatus_HardwareSlotAllocated = 2,
    ControlChannelTriggerStatus_PolicyError = 3,
    ControlChannelTriggerStatus_SystemError = 4,
    ControlChannelTriggerStatus_TransportDisconnected = 5,
    ControlChannelTriggerStatus_ServiceUnavailable = 6,
};
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.MessageWebSocketReceiveMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode
{
    MessageWebSocketReceiveMode_FullMessage = 0,
    MessageWebSocketReceiveMode_PartialMessage = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityConnectedStandbyAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction
{
    SocketActivityConnectedStandbyAction_DoNotWake = 0,
    SocketActivityConnectedStandbyAction_Wake = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind
{
    SocketActivityKind_None = 0,
    SocketActivityKind_StreamSocketListener = 1,
    SocketActivityKind_DatagramSocket = 2,
    SocketActivityKind_StreamSocket = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketActivityTriggerReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason
{
    SocketActivityTriggerReason_None = 0,
    SocketActivityTriggerReason_SocketActivity = 1,
    SocketActivityTriggerReason_ConnectionAccepted = 2,
    SocketActivityTriggerReason_KeepAliveTimerExpired = 3,
    SocketActivityTriggerReason_SocketClosed = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus
{
    SocketErrorStatus_Unknown = 0,
    SocketErrorStatus_OperationAborted = 1,
    SocketErrorStatus_HttpInvalidServerResponse = 2,
    SocketErrorStatus_ConnectionTimedOut = 3,
    SocketErrorStatus_AddressFamilyNotSupported = 4,
    SocketErrorStatus_SocketTypeNotSupported = 5,
    SocketErrorStatus_HostNotFound = 6,
    SocketErrorStatus_NoDataRecordOfRequestedType = 7,
    SocketErrorStatus_NonAuthoritativeHostNotFound = 8,
    SocketErrorStatus_ClassTypeNotFound = 9,
    SocketErrorStatus_AddressAlreadyInUse = 10,
    SocketErrorStatus_CannotAssignRequestedAddress = 11,
    SocketErrorStatus_ConnectionRefused = 12,
    SocketErrorStatus_NetworkIsUnreachable = 13,
    SocketErrorStatus_UnreachableHost = 14,
    SocketErrorStatus_NetworkIsDown = 15,
    SocketErrorStatus_NetworkDroppedConnectionOnReset = 16,
    SocketErrorStatus_SoftwareCausedConnectionAbort = 17,
    SocketErrorStatus_ConnectionResetByPeer = 18,
    SocketErrorStatus_HostIsDown = 19,
    SocketErrorStatus_NoAddressesFound = 20,
    SocketErrorStatus_TooManyOpenFiles = 21,
    SocketErrorStatus_MessageTooLong = 22,
    SocketErrorStatus_CertificateExpired = 23,
    SocketErrorStatus_CertificateUntrustedRoot = 24,
    SocketErrorStatus_CertificateCommonNameIsIncorrect = 25,
    SocketErrorStatus_CertificateWrongUsage = 26,
    SocketErrorStatus_CertificateRevoked = 27,
    SocketErrorStatus_CertificateNoRevocationCheck = 28,
    SocketErrorStatus_CertificateRevocationServerOffline = 29,
    SocketErrorStatus_CertificateIsInvalid = 30,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketMessageType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType
{
    SocketMessageType_Binary = 0,
    SocketMessageType_Utf8 = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel
{
    SocketProtectionLevel_PlainSocket = 0,
    SocketProtectionLevel_Ssl
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("Ssl may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 1,
    SocketProtectionLevel_SslAllowNullEncryption = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_BluetoothEncryptionAllowNullAuthentication = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_BluetoothEncryptionWithAuthentication = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_Ssl3AllowWeakEncryption
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("Ssl3AllowWeakEncryption may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
     = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_Tls10 = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_Tls11 = 7,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    SocketProtectionLevel_Tls12 = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    SocketProtectionLevel_Unspecified = 9,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketQualityOfService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService
{
    SocketQualityOfService_Normal = 0,
    SocketQualityOfService_LowLatency = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.SocketSslErrorSeverity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity
{
    SocketSslErrorSeverity_None = 0,
    SocketSslErrorSeverity_Ignorable = 1,
    SocketSslErrorSeverity_Fatal = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.BandwidthStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics
{
    UINT64 OutboundBitsPerSecond;
    UINT64 InboundBitsPerSecond;
    UINT64 OutboundBitsPerSecondInstability;
    UINT64 InboundBitsPerSecondInstability;
    boolean OutboundBandwidthPeaked;
    boolean InboundBandwidthPeaked;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.Sockets.RoundTripTimeStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics
{
    UINT32 Variance;
    UINT32 Max;
    UINT32 Min;
    UINT32 Sum;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTrigger
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger[] = L"Windows.Networking.Sockets.IControlChannelTrigger";
/* [object, uuid("7D1431A7-EE96-40E8-A199-8703CD969EC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlChannelTriggerId )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransportObject )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeepAliveTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * trigger
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PushNotificationTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * trigger
        );
    HRESULT ( STDMETHODCALLTYPE *UsingTransport )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [in] */__RPC__in_opt IInspectable * transport
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForPushEnabled )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus * channelTriggerStatus
        );
    HRESULT ( STDMETHODCALLTYPE *DecreaseNetworkKeepAliveInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
        );
    HRESULT ( STDMETHODCALLTYPE *FlushTransport )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_ControlChannelTriggerId(This,value) \
    ( (This)->lpVtbl->get_ControlChannelTriggerId(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_ServerKeepAliveIntervalInMinutes(This,value) \
    ( (This)->lpVtbl->get_ServerKeepAliveIntervalInMinutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_put_ServerKeepAliveIntervalInMinutes(This,value) \
    ( (This)->lpVtbl->put_ServerKeepAliveIntervalInMinutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_CurrentKeepAliveIntervalInMinutes(This,value) \
    ( (This)->lpVtbl->get_CurrentKeepAliveIntervalInMinutes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_TransportObject(This,value) \
    ( (This)->lpVtbl->get_TransportObject(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_KeepAliveTrigger(This,trigger) \
    ( (This)->lpVtbl->get_KeepAliveTrigger(This,trigger) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_get_PushNotificationTrigger(This,trigger) \
    ( (This)->lpVtbl->get_PushNotificationTrigger(This,trigger) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_UsingTransport(This,transport) \
    ( (This)->lpVtbl->UsingTransport(This,transport) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_WaitForPushEnabled(This,channelTriggerStatus) \
    ( (This)->lpVtbl->WaitForPushEnabled(This,channelTriggerStatus) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_DecreaseNetworkKeepAliveInterval(This) \
    ( (This)->lpVtbl->DecreaseNetworkKeepAliveInterval(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_FlushTransport(This) \
    ( (This)->lpVtbl->FlushTransport(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTrigger2
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger2[] = L"Windows.Networking.Sockets.IControlChannelTrigger2";
/* [object, uuid("AF00D237-51BE-4514-9725-3556E1879580"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsWakeFromLowPowerSupported )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_get_IsWakeFromLowPowerSupported(This,value) \
    ( (This)->lpVtbl->get_IsWakeFromLowPowerSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerEventDetails
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerEventDetails";
/* [object, uuid("1B36E047-89BB-4236-96AC-71D012BB4869"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlChannelTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_get_ControlChannelTrigger(This,value) \
    ( (This)->lpVtbl->get_ControlChannelTrigger(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerFactory
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.ControlChannelTrigger
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerFactory[] = L"Windows.Networking.Sockets.IControlChannelTriggerFactory";
/* [object, uuid("DA4B7CF0-8D71-446F-88C3-B95184A2D6CD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateControlChannelTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
        /* [in] */__RPC__in HSTRING channelId,
        /* [in] */UINT32 serverKeepAliveIntervalInMinutes,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * notificationChannel
        );
    HRESULT ( STDMETHODCALLTYPE *CreateControlChannelTriggerEx )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
        /* [in] */__RPC__in HSTRING channelId,
        /* [in] */UINT32 serverKeepAliveIntervalInMinutes,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType resourceRequestType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * notificationChannel
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_CreateControlChannelTrigger(This,channelId,serverKeepAliveIntervalInMinutes,notificationChannel) \
    ( (This)->lpVtbl->CreateControlChannelTrigger(This,channelId,serverKeepAliveIntervalInMinutes,notificationChannel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_CreateControlChannelTriggerEx(This,channelId,serverKeepAliveIntervalInMinutes,resourceRequestType,notificationChannel) \
    ( (This)->lpVtbl->CreateControlChannelTriggerEx(This,channelId,serverKeepAliveIntervalInMinutes,resourceRequestType,notificationChannel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails";
/* [object, uuid("6851038E-8EC4-42FE-9BB2-21E91B7BFCB1"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResetReason )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareSlotReset )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareSlotReset )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_get_ResetReason(This,value) \
    ( (This)->lpVtbl->get_ResetReason(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_get_HardwareSlotReset(This,value) \
    ( (This)->lpVtbl->get_HardwareSlotReset(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_get_SoftwareSlotReset(This,value) \
    ( (This)->lpVtbl->get_SoftwareSlotReset(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket[] = L"Windows.Networking.Sockets.IDatagramSocket";
/* [object, uuid("7FE25BBB-C3BC-4677-8446-CA28A465A3AF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindServiceNameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindEndpointAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *JoinMulticastGroup )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * host
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetOutputStreamWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_get_Control(This,value) \
    ( (This)->lpVtbl->get_Control(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_ConnectAsync(This,remoteHostName,remoteServiceName,operation) \
    ( (This)->lpVtbl->ConnectAsync(This,remoteHostName,remoteServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_ConnectWithEndpointPairAsync(This,endpointPair,operation) \
    ( (This)->lpVtbl->ConnectWithEndpointPairAsync(This,endpointPair,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_BindServiceNameAsync(This,localServiceName,operation) \
    ( (This)->lpVtbl->BindServiceNameAsync(This,localServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_BindEndpointAsync(This,localHostName,localServiceName,operation) \
    ( (This)->lpVtbl->BindEndpointAsync(This,localHostName,localServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_JoinMulticastGroup(This,host) \
    ( (This)->lpVtbl->JoinMulticastGroup(This,host) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_GetOutputStreamAsync(This,remoteHostName,remoteServiceName,value) \
    ( (This)->lpVtbl->GetOutputStreamAsync(This,remoteHostName,remoteServiceName,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_GetOutputStreamWithEndpointPairAsync(This,endpointPair,value) \
    ( (This)->lpVtbl->GetOutputStreamWithEndpointPairAsync(This,endpointPair,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_add_MessageReceived(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_MessageReceived(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_remove_MessageReceived(This,eventCookie) \
    ( (This)->lpVtbl->remove_MessageReceived(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket2[] = L"Windows.Networking.Sockets.IDatagramSocket2";
/* [object, uuid("D83BA354-9A9D-4185-A20A-1424C9C2A7CD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *BindServiceNameAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_BindServiceNameAndAdapterAsync(This,localServiceName,adapter,operation) \
    ( (This)->lpVtbl->BindServiceNameAndAdapterAsync(This,localServiceName,adapter,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocket3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket3[] = L"Windows.Networking.Sockets.IDatagramSocket3";
/* [object, uuid("37544F09-AB92-4306-9AC1-0C381283D9C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [in] */GUID taskId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [in] */GUID taskId,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContextAndKeepAliveTime )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan keepAliveTime
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_CancelIOAsync(This,operation) \
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_EnableTransferOwnership(This,taskId) \
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) \
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_TransferOwnership(This,socketId) \
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_TransferOwnershipWithContext(This,socketId,data) \
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) \
    ( (This)->lpVtbl->TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl[] = L"Windows.Networking.Sockets.IDatagramSocketControl";
/* [object, uuid("52AC3F2E-349A-4135-BB58-B79B2647D390"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
        /* [in] */BYTE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_get_QualityOfService(This,value) \
    ( (This)->lpVtbl->get_QualityOfService(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_put_QualityOfService(This,value) \
    ( (This)->lpVtbl->put_QualityOfService(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_get_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_put_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl2[] = L"Windows.Networking.Sockets.IDatagramSocketControl2";
/* [object, uuid("33EAD5C2-979C-4415-82A1-3CFAF646C192"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DontFragment )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DontFragment )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_get_InboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_InboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_put_InboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->put_InboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_get_DontFragment(This,value) \
    ( (This)->lpVtbl->get_DontFragment(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_put_DontFragment(This,value) \
    ( (This)->lpVtbl->put_DontFragment(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketControl3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl3[] = L"Windows.Networking.Sockets.IDatagramSocketControl3";
/* [object, uuid("D4EB8256-1F6D-4598-9B57-D42A001DF349"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MulticastOnly )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MulticastOnly )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_get_MulticastOnly(This,value) \
    ( (This)->lpVtbl->get_MulticastOnly(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_put_MulticastOnly(This,value) \
    ( (This)->lpVtbl->put_MulticastOnly(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketInformation[] = L"Windows.Networking.Sockets.IDatagramSocketInformation";
/* [object, uuid("5F1A569A-55FB-48CD-9706-7A974F7B1585"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_get_LocalAddress(This,value) \
    ( (This)->lpVtbl->get_LocalAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_get_LocalPort(This,value) \
    ( (This)->lpVtbl->get_LocalPort(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_get_RemoteAddress(This,value) \
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_get_RemotePort(This,value) \
    ( (This)->lpVtbl->get_RemotePort(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs";
/* [object, uuid("9E2DDCA2-1712-4CE4-B179-8C652C6D107E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataReader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * inputStream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_get_RemoteAddress(This,value) \
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_get_RemotePort(This,value) \
    ( (This)->lpVtbl->get_RemotePort(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_get_LocalAddress(This,value) \
    ( (This)->lpVtbl->get_LocalAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_GetDataReader(This,dataReader) \
    ( (This)->lpVtbl->GetDataReader(This,dataReader) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_GetDataStream(This,inputStream) \
    ( (This)->lpVtbl->GetDataStream(This,inputStream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IDatagramSocketStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.DatagramSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketStatics[] = L"Windows.Networking.Sockets.IDatagramSocketStatics";
/* [object, uuid("E9C62AEE-1494-4A21-BB7E-8589FC751D9D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsWithSortOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) \
    ( (This)->lpVtbl->GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) \
    ( (This)->lpVtbl->GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket[] = L"Windows.Networking.Sockets.IMessageWebSocket";
/* [object, uuid("33727D08-34D5-4746-AD7B-8DDE5BC2EF88"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_get_Control(This,value) \
    ( (This)->lpVtbl->get_Control(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_add_MessageReceived(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_MessageReceived(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_remove_MessageReceived(This,eventCookie) \
    ( (This)->lpVtbl->remove_MessageReceived(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IMessageWebSocket
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket2[] = L"Windows.Networking.Sockets.IMessageWebSocket2";
/* [object, uuid("BED0CEE7-F9C8-440A-9AD5-737281D9742E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_add_ServerCustomValidationRequested(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_remove_ServerCustomValidationRequested(This,eventCookie) \
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketControl
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl[] = L"Windows.Networking.Sockets.IMessageWebSocketControl";
/* [object, uuid("8118388A-C629-4F0A-80FB-81FC05538862"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxMessageSize )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxMessageSize )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_get_MaxMessageSize(This,value) \
    ( (This)->lpVtbl->get_MaxMessageSize(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_put_MaxMessageSize(This,value) \
    ( (This)->lpVtbl->put_MaxMessageSize(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_get_MessageType(This,value) \
    ( (This)->lpVtbl->get_MessageType(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_put_MessageType(This,value) \
    ( (This)->lpVtbl->put_MessageType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl2[] = L"Windows.Networking.Sockets.IMessageWebSocketControl2";
/* [object, uuid("E30FD791-080C-400A-A712-27DFA9E744D8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReceiveMode )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReceiveMode )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_get_DesiredUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->get_DesiredUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_put_DesiredUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->put_DesiredUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_get_ActualUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->get_ActualUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_get_ReceiveMode(This,value) \
    ( (This)->lpVtbl->get_ReceiveMode(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_put_ReceiveMode(This,value) \
    ( (This)->lpVtbl->put_ReceiveMode(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_get_ClientCertificate(This,value) \
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_put_ClientCertificate(This,value) \
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs";
/* [object, uuid("478C22AC-4C4B-42ED-9ED7-1EF9F94FA3D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataReader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * inputStream
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_get_MessageType(This,value) \
    ( (This)->lpVtbl->get_MessageType(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_GetDataReader(This,dataReader) \
    ( (This)->lpVtbl->GetDataReader(This,dataReader) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_GetDataStream(This,inputStream) \
    ( (This)->lpVtbl->GetDataStream(This,inputStream) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2";
/* [object, uuid("89CE06FD-DD6F-4A07-87F9-F9EB4D89D83D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMessageComplete )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_get_IsMessageComplete(This,value) \
    ( (This)->lpVtbl->get_IsMessageComplete(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContext[] = L"Windows.Networking.Sockets.ISocketActivityContext";
/* [object, uuid("43B04D64-4C85-4396-A637-1D973F6EBD49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityContextFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContextFactory[] = L"Windows.Networking.Sockets.ISocketActivityContextFactory";
/* [object, uuid("B99FC3C3-088C-4388-83AE-2525138E049A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * * context
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_Create(This,data,context) \
    ( (This)->lpVtbl->Create(This,data,context) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformation[] = L"Windows.Networking.Sockets.ISocketActivityInformation";
/* [object, uuid("8D8A42E4-A87E-4B74-9968-185B2511DEFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SocketKind )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DatagramSocket )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StreamSocket )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StreamSocketListener )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_SocketKind(This,value) \
    ( (This)->lpVtbl->get_SocketKind(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_Context(This,value) \
    ( (This)->lpVtbl->get_Context(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_DatagramSocket(This,value) \
    ( (This)->lpVtbl->get_DatagramSocket(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_StreamSocket(This,value) \
    ( (This)->lpVtbl->get_StreamSocket(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_get_StreamSocketListener(This,value) \
    ( (This)->lpVtbl->get_StreamSocketListener(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityInformationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformationStatics[] = L"Windows.Networking.Sockets.ISocketActivityInformationStatics";
/* [object, uuid("8570B47A-7E7D-4736-8041-1327A6543C56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllSockets )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * * sockets
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_get_AllSockets(This,sockets) \
    ( (This)->lpVtbl->get_AllSockets(This,sockets) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketActivityTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketActivityTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.ISocketActivityTriggerDetails";
/* [object, uuid("45F406A7-FC9F-4F81-ACAD-355FEF51E67B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SocketInformation )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_get_SocketInformation(This,value) \
    ( (This)->lpVtbl->get_SocketInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.ISocketErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.SocketError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketErrorStatics[] = L"Windows.Networking.Sockets.ISocketErrorStatics";
/* [object, uuid("828337F4-7D56-4D8E-B7B4-A07DD7C1BCA9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
        /* [in] */INT32 hresult,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_GetStatus(This,hresult,status) \
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket[] = L"Windows.Networking.Sockets.IStreamSocket";
/* [object, uuid("69A22CF3-FC7B-4857-AF38-F6E7DE6A5B49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAndProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpgradeToSslAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * validationHostName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_get_Control(This,value) \
    ( (This)->lpVtbl->get_Control(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_ConnectWithEndpointPairAsync(This,endpointPair,operation) \
    ( (This)->lpVtbl->ConnectWithEndpointPairAsync(This,endpointPair,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_ConnectAsync(This,remoteHostName,remoteServiceName,operation) \
    ( (This)->lpVtbl->ConnectAsync(This,remoteHostName,remoteServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_ConnectWithEndpointPairAndProtectionLevelAsync(This,endpointPair,protectionLevel,operation) \
    ( (This)->lpVtbl->ConnectWithEndpointPairAndProtectionLevelAsync(This,endpointPair,protectionLevel,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_ConnectWithProtectionLevelAsync(This,remoteHostName,remoteServiceName,protectionLevel,operation) \
    ( (This)->lpVtbl->ConnectWithProtectionLevelAsync(This,remoteHostName,remoteServiceName,protectionLevel,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_UpgradeToSslAsync(This,protectionLevel,validationHostName,operation) \
    ( (This)->lpVtbl->UpgradeToSslAsync(This,protectionLevel,validationHostName,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket2[] = L"Windows.Networking.Sockets.IStreamSocket2";
/* [object, uuid("29D0E575-F314-4D09-ADF0-0FBD967FBD9F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ConnectWithProtectionLevelAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_ConnectWithProtectionLevelAndAdapterAsync(This,remoteHostName,remoteServiceName,protectionLevel,adapter,operation) \
    ( (This)->lpVtbl->ConnectWithProtectionLevelAndAdapterAsync(This,remoteHostName,remoteServiceName,protectionLevel,adapter,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocket3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket3[] = L"Windows.Networking.Sockets.IStreamSocket3";
/* [object, uuid("3F430B00-9D28-4854-BAC3-2301941EC223"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [in] */GUID taskId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [in] */GUID taskId,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContextAndKeepAliveTime )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
        /* [in] */__RPC__in HSTRING socketId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan keepAliveTime
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_CancelIOAsync(This,operation) \
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_EnableTransferOwnership(This,taskId) \
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) \
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_TransferOwnership(This,socketId) \
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_TransferOwnershipWithContext(This,socketId,data) \
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) \
    ( (This)->lpVtbl->TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl[] = L"Windows.Networking.Sockets.IStreamSocketControl";
/* [object, uuid("FE25ADF1-92AB-4AF3-9992-0F4C85E36CC4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
        /* [in] */BYTE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_get_NoDelay(This,value) \
    ( (This)->lpVtbl->get_NoDelay(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_put_NoDelay(This,value) \
    ( (This)->lpVtbl->put_NoDelay(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_get_KeepAlive(This,value) \
    ( (This)->lpVtbl->get_KeepAlive(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_put_KeepAlive(This,value) \
    ( (This)->lpVtbl->put_KeepAlive(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_get_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_put_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_get_QualityOfService(This,value) \
    ( (This)->lpVtbl->get_QualityOfService(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_put_QualityOfService(This,value) \
    ( (This)->lpVtbl->put_QualityOfService(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_get_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_put_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl2[] = L"Windows.Networking.Sockets.IStreamSocketControl2";
/* [object, uuid("C2D09A56-060F-44C1-B8E2-1FBF60BD62C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_get_IgnorableServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl3[] = L"Windows.Networking.Sockets.IStreamSocketControl3";
/* [object, uuid("C56A444C-4E74-403E-894C-B31CAE5C7342"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SerializeConnectionAttempts )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SerializeConnectionAttempts )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_get_SerializeConnectionAttempts(This,value) \
    ( (This)->lpVtbl->get_SerializeConnectionAttempts(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_put_SerializeConnectionAttempts(This,value) \
    ( (This)->lpVtbl->put_SerializeConnectionAttempts(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_get_ClientCertificate(This,value) \
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_put_ClientCertificate(This,value) \
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketControl4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl4[] = L"Windows.Networking.Sockets.IStreamSocketControl4";
/* [object, uuid("964E2B3D-EC27-4888-B3CE-C74B418423AD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MinProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_get_MinProtectionLevel(This,value) \
    ( (This)->lpVtbl->get_MinProtectionLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_put_MinProtectionLevel(This,value) \
    ( (This)->lpVtbl->put_MinProtectionLevel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation[] = L"Windows.Networking.Sockets.IStreamSocketInformation";
/* [object, uuid("3B80AE30-5E68-4205-88F0-DC85D2E25DED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteHostName )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceName )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoundTripTimeStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionKey )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_LocalAddress(This,value) \
    ( (This)->lpVtbl->get_LocalAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_LocalPort(This,value) \
    ( (This)->lpVtbl->get_LocalPort(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_RemoteHostName(This,value) \
    ( (This)->lpVtbl->get_RemoteHostName(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_RemoteAddress(This,value) \
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_RemoteServiceName(This,value) \
    ( (This)->lpVtbl->get_RemoteServiceName(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_RemotePort(This,value) \
    ( (This)->lpVtbl->get_RemotePort(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_RoundTripTimeStatistics(This,value) \
    ( (This)->lpVtbl->get_RoundTripTimeStatistics(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_BandwidthStatistics(This,value) \
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_ProtectionLevel(This,value) \
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_get_SessionKey(This,value) \
    ( (This)->lpVtbl->get_SessionKey(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation2[] = L"Windows.Networking.Sockets.IStreamSocketInformation2";
/* [object, uuid("12C28452-4BDC-4EE4-976A-CF130E9D92E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_get_ServerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_get_ServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_get_ServerCertificate(This,value) \
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_get_ServerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener[] = L"Windows.Networking.Sockets.IStreamSocketListener";
/* [object, uuid("FF513437-DF9F-4DF0-BF82-0EC5D7B35AAE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BindServiceNameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindEndpointAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ConnectionReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ConnectionReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_get_Control(This,value) \
    ( (This)->lpVtbl->get_Control(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_BindServiceNameAsync(This,localServiceName,operation) \
    ( (This)->lpVtbl->BindServiceNameAsync(This,localServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_BindEndpointAsync(This,localHostName,localServiceName,operation) \
    ( (This)->lpVtbl->BindEndpointAsync(This,localHostName,localServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_add_ConnectionReceived(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_ConnectionReceived(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_remove_ConnectionReceived(This,eventCookie) \
    ( (This)->lpVtbl->remove_ConnectionReceived(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener2[] = L"Windows.Networking.Sockets.IStreamSocketListener2";
/* [object, uuid("658DC13E-BB3E-4458-B232-ED1088694B98"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *BindServiceNameWithProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *BindServiceNameWithProtectionLevelAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
        /* [in] */__RPC__in HSTRING localServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_BindServiceNameWithProtectionLevelAsync(This,localServiceName,protectionLevel,operation) \
    ( (This)->lpVtbl->BindServiceNameWithProtectionLevelAsync(This,localServiceName,protectionLevel,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_BindServiceNameWithProtectionLevelAndAdapterAsync(This,localServiceName,protectionLevel,adapter,operation) \
    ( (This)->lpVtbl->BindServiceNameWithProtectionLevelAndAdapterAsync(This,localServiceName,protectionLevel,adapter,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListener3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener3[] = L"Windows.Networking.Sockets.IStreamSocketListener3";
/* [object, uuid("4798201C-BDF8-4919-8542-28D450E74507"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
        /* [in] */GUID taskId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
        /* [in] */GUID taskId,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
        /* [in] */__RPC__in HSTRING socketId
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
        /* [in] */__RPC__in HSTRING socketId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_CancelIOAsync(This,operation) \
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_EnableTransferOwnership(This,taskId) \
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) \
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_TransferOwnership(This,socketId) \
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_TransferOwnershipWithContext(This,socketId,data) \
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs";
/* [object, uuid("0C472EA9-373F-447B-85B1-DDD4548803BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_get_Socket(This,value) \
    ( (This)->lpVtbl->get_Socket(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl";
/* [object, uuid("20D8C576-8D8A-4DBA-9722-A16C4D984980"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_get_QualityOfService(This,value) \
    ( (This)->lpVtbl->get_QualityOfService(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_put_QualityOfService(This,value) \
    ( (This)->lpVtbl->put_QualityOfService(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl2[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl2";
/* [object, uuid("948BB665-2C3E-404B-B8B0-8EB249A2B0A1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
        /* [in] */BYTE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_get_NoDelay(This,value) \
    ( (This)->lpVtbl->get_NoDelay(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_put_NoDelay(This,value) \
    ( (This)->lpVtbl->put_NoDelay(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_get_KeepAlive(This,value) \
    ( (This)->lpVtbl->get_KeepAlive(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_put_KeepAlive(This,value) \
    ( (This)->lpVtbl->put_KeepAlive(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_get_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_put_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_get_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_put_OutboundUnicastHopLimit(This,value) \
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketListenerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocketListenerInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerInformation[] = L"Windows.Networking.Sockets.IStreamSocketListenerInformation";
/* [object, uuid("E62BA82F-A63A-430B-BF62-29E93E5633B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_get_LocalPort(This,value) \
    ( (This)->lpVtbl->get_LocalPort(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamSocketStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamSocket
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketStatics[] = L"Windows.Networking.Sockets.IStreamSocketStatics";
/* [object, uuid("A420BC4A-6E2E-4AF5-B556-355AE0CD4F29"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsWithSortOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
        /* [in] */__RPC__in HSTRING remoteServiceName,
        /* [in] */__x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) \
    ( (This)->lpVtbl->GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) \
    ( (This)->lpVtbl->GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket[] = L"Windows.Networking.Sockets.IStreamWebSocket";
/* [object, uuid("BD4A49D8-B289-45BB-97EB-C7525205A843"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_get_Control(This,value) \
    ( (This)->lpVtbl->get_Control(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocket2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocket
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IStreamWebSocket
 *     Windows.Networking.Sockets.IWebSocket
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket2[] = L"Windows.Networking.Sockets.IStreamWebSocket2";
/* [object, uuid("AA4D08CB-93F5-4678-8236-57CCE5417ED5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_add_ServerCustomValidationRequested(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_remove_ServerCustomValidationRequested(This,eventCookie) \
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocketControl
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl[] = L"Windows.Networking.Sockets.IStreamWebSocketControl";
/* [object, uuid("B4F478B1-A45A-48DB-953A-645B7D964C07"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_get_NoDelay(This,value) \
    ( (This)->lpVtbl->get_NoDelay(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_put_NoDelay(This,value) \
    ( (This)->lpVtbl->put_NoDelay(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IStreamWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.StreamWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl2[] = L"Windows.Networking.Sockets.IStreamWebSocketControl2";
/* [object, uuid("215D9F7E-FA58-40DA-9F11-A48DAFE95037"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_get_DesiredUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->get_DesiredUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_put_DesiredUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->put_DesiredUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_get_ActualUnsolicitedPongInterval(This,value) \
    ( (This)->lpVtbl->get_ActualUnsolicitedPongInterval(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_get_ClientCertificate(This,value) \
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_put_ClientCertificate(This,value) \
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocket
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
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocket[] = L"Windows.Networking.Sockets.IWebSocket";
/* [object, uuid("F877396F-99B1-4E18-BC08-850C9ADF156E"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [in] */__RPC__in HSTRING headerName,
        /* [in] */__RPC__in HSTRING headerValue
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CloseWithStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
        /* [in] */UINT16 code,
        /* [in] */__RPC__in HSTRING reason
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_get_OutputStream(This,value) \
    ( (This)->lpVtbl->get_OutputStream(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_ConnectAsync(This,uri,operation) \
    ( (This)->lpVtbl->ConnectAsync(This,uri,operation) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_SetRequestHeader(This,headerName,headerValue) \
    ( (This)->lpVtbl->SetRequestHeader(This,headerName,headerValue) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_add_Closed(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_Closed(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_remove_Closed(This,eventCookie) \
    ( (This)->lpVtbl->remove_Closed(This,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_CloseWithStatus(This,code,reason) \
    ( (This)->lpVtbl->CloseWithStatus(This,code,reason) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocket;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocket_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketClosedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketClosedEventArgs";
/* [object, uuid("CEB78D07-D0A8-4703-A091-C8C2C0915BC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_get_Code(This,value) \
    ( (This)->lpVtbl->get_Code(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl[] = L"Windows.Networking.Sockets.IWebSocketControl";
/* [object, uuid("2EC4BDC3-D9A5-455A-9811-DE24D45337E9"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedProtocols )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_get_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_put_OutboundBufferSizeInBytes(This,value) \
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_get_ServerCredential(This,value) \
    ( (This)->lpVtbl->get_ServerCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_put_ServerCredential(This,value) \
    ( (This)->lpVtbl->put_ServerCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_get_ProxyCredential(This,value) \
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_put_ProxyCredential(This,value) \
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_get_SupportedProtocols(This,value) \
    ( (This)->lpVtbl->get_SupportedProtocols(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketControl2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketControl
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl2[] = L"Windows.Networking.Sockets.IWebSocketControl2";
/* [object, uuid("79C3BE03-F2CA-461E-AF4E-9665BC2D0620"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_get_IgnorableServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketErrorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketErrorStatics[] = L"Windows.Networking.Sockets.IWebSocketErrorStatics";
/* [object, uuid("27CDF35B-1F61-4709-8E02-61283ADA4E9D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
        /* [in] */INT32 hresult,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_GetStatus(This,hresult,status) \
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation[] = L"Windows.Networking.Sockets.IWebSocketInformation";
/* [object, uuid("5E01E316-C92A-47A5-B25F-07847639D181"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_get_LocalAddress(This,value) \
    ( (This)->lpVtbl->get_LocalAddress(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_get_BandwidthStatistics(This,value) \
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_get_Protocol(This,value) \
    ( (This)->lpVtbl->get_Protocol(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.Sockets.IWebSocketInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation2[] = L"Windows.Networking.Sockets.IWebSocketInformation2";
/* [object, uuid("CE1D39CE-A1B7-4D43-8269-8D5B981BD47A"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_get_ServerCertificate(This,value) \
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_get_ServerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_get_ServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_get_ServerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs";
/* [object, uuid("FFEFFE48-022A-4AB7-8B36-E10AF4640E6B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reject )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_get_ServerCertificate(This,value) \
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_get_ServerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_get_ServerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_get_ServerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_Reject(This) \
    ( (This)->lpVtbl->Reject(This) )

#define __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Networking.Sockets.ControlChannelTrigger
 *
 * Introduced to Windows.Networking.Sockets.ControlChannelTriggerContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Sockets.IControlChannelTriggerFactory interface starting with version 1.0 of the Windows.Networking.Sockets.ControlChannelTriggerContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IControlChannelTrigger ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IControlChannelTrigger2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_ControlChannelTrigger_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_ControlChannelTrigger_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ControlChannelTrigger[] = L"Windows.Networking.Sockets.ControlChannelTrigger";
#endif
#endif // WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IDatagramSocketStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocket ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IDatagramSocket2
 *    Windows.Networking.Sockets.IDatagramSocket3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocket[] = L"Windows.Networking.Sockets.DatagramSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IDatagramSocketControl2
 *    Windows.Networking.Sockets.IDatagramSocketControl3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketControl[] = L"Windows.Networking.Sockets.DatagramSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketInformation[] = L"Windows.Networking.Sockets.DatagramSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocket ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocket
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IMessageWebSocket2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocket[] = L"Windows.Networking.Sockets.MessageWebSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketControl
 *    Windows.Networking.Sockets.IWebSocketControl2
 *    Windows.Networking.Sockets.IMessageWebSocketControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketControl[] = L"Windows.Networking.Sockets.MessageWebSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketInformation[] = L"Windows.Networking.Sockets.MessageWebSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs ** Default Interface **
 *    Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.Sockets.ISocketActivityContextFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityContext ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityContext_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityContext[] = L"Windows.Networking.Sockets.SocketActivityContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.ISocketActivityInformationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityInformation[] = L"Windows.Networking.Sockets.SocketActivityInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketActivityTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.ISocketActivityTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketActivityTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.SocketActivityTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.SocketError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.ISocketErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Sockets_SocketError_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_SocketError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketError[] = L"Windows.Networking.Sockets.SocketError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IStreamSocketStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocket ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamSocket2
 *    Windows.Networking.Sockets.IStreamSocket3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocket[] = L"Windows.Networking.Sockets.StreamSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketControl2
 *    Windows.Networking.Sockets.IStreamSocketControl3
 *    Windows.Networking.Sockets.IStreamSocketControl4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketControl[] = L"Windows.Networking.Sockets.StreamSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketInformation[] = L"Windows.Networking.Sockets.StreamSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListener ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamSocketListener2
 *    Windows.Networking.Sockets.IStreamSocketListener3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListener_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListener[] = L"Windows.Networking.Sockets.StreamSocketListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerControl ** Default Interface **
 *    Windows.Networking.Sockets.IStreamSocketListenerControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerControl[] = L"Windows.Networking.Sockets.StreamSocketListenerControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamSocketListenerInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamSocketListenerInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamSocketListenerInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerInformation[] = L"Windows.Networking.Sockets.StreamSocketListenerInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocket
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamWebSocket ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocket
 *    Windows.Foundation.IClosable
 *    Windows.Networking.Sockets.IStreamWebSocket2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocket_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocket_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocket[] = L"Windows.Networking.Sockets.StreamWebSocket";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocketControl
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IStreamWebSocketControl ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketControl
 *    Windows.Networking.Sockets.IWebSocketControl2
 *    Windows.Networking.Sockets.IStreamWebSocketControl2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketControl_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketControl_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketControl[] = L"Windows.Networking.Sockets.StreamWebSocketControl";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.StreamWebSocketInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketInformation ** Default Interface **
 *    Windows.Networking.Sockets.IWebSocketInformation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_StreamWebSocketInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketInformation[] = L"Windows.Networking.Sockets.StreamWebSocketInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketClosedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketClosedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketClosedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketClosedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.WebSocketClosedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.Sockets.IWebSocketErrorStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketError_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketError[] = L"Windows.Networking.Sockets.WebSocketError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketKeepAlive
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Background.IBackgroundTask ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketKeepAlive_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketKeepAlive_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketKeepAlive[] = L"Windows.Networking.Sockets.WebSocketKeepAlive";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Enetworking2Esockets_p_h__

#endif // __windows2Enetworking2Esockets_h__
